 
import socket
import select
import sys
from random import randint
from enum import Enum

########################
CLEAR = 0
HELP = 1
REFILL = 2
MANAGER = 3
CANCEL = 4
GET_ALL_FLAGS = 5
########################

########################
NUM_TABLES = 16             #16 tables in restaurant
BUFFER = 4096               #4096 byte buffer
HOST = ''                   #Meaning all available interfaces
PORT = 9292#randint(9000, 10000) #Arbitrary non-privileged port
CONNECTIONS = []            #Array of connections
########################

#Table Class, and the global tables array
class Table:
    def __init__(self):
        self.flags = []
        self.needsAttention = False
tables = []
for i in range(NUM_TABLES):
    tables.append(Table())

#Parse the customer message
###Ex: C 1 3 = Table 1 Requested a manager
###Ex: C 3 2 = Table 3 Requested Refills
###Ex: C 7 4 3 = Table 7 Canceled Manager Request
def parseCustomerMsg(msg):
    print '...Parsing customer message'
    splitList = msg.split(" ")[1:]
    tableNum = int(splitList[0])
    flag = int(splitList[1])
    if flag == CLEAR:
        tables[tableNum].flags = []
    elif flag == CANCEL:
        if int(splitList[2]) in tables[tableNum].flags:
            tables[tableNum].flags.remove(int(splitList[2]))
    else:
        tables[tableNum].flags.append(flag)
    print 'Table ' + splitList[0] + ' requested ' + splitList[1]

#Parse the server message
###Ex: S 1 2 = Does Table 2 need Refills?
###Ex: S 4 3 = Does Table 4 want a manager?
def parseServerMsg(msg):
    print '...Parsing server message'
    splitList = msg.split(" ")[1:]
    tableNum = int(splitList[0])#tables[int(splitList[0])]
    flag = int(splitList[1])
    returnStr = "False"
    if flag == GET_ALL_FLAGS:
        returnStr = ""
        for item in tables[tableNum].flags:
            returnStr += str(item) + " "
    elif flag == CLEAR or flag == CANCEL:
        parseCustomerMsg(msg)
        returnStr = "SUCCESS"
    elif flag in tables[tableNum].flags:
        returnStr = 'True'

    print '...Returning ' + returnStr
    return returnStr

print 'Port #' + str(PORT)

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
print 'Socket created'
    
#Bind socket to local host and port
try:
    s.bind((HOST, PORT))
except socket.error as msg:
    print 'Bind failed. Error Code : ' + str(msg[0]) + ' Message ' + msg[1]
    sys.exit()

print 'Socket bind complete'
                      
#Start listening on socket
s.listen(10)
print 'Socket now listening'

#Add socket to connections
CONNECTIONS.append(s)

#now keep talking with the client
while 1:
    read_sockets, write_sockets, error_sockets = select.select(CONNECTIONS, [], [])
    for sock in read_sockets:
        if sock == s:
            sockfd, addr = s.accept()
            CONNECTIONS.append(sockfd)
            print "Client (%s, %s) connected" % addr
        else:
#            try:
            data = sock.recv(BUFFER)
            if data:
                print "Received: " + data
                sendStr = "INVALID"
                if data[0].lower() == "s":
                    sendStr = parseServerMsg(data)
                if data[0].lower() == "c":
                    sendStr = "SUCCESS"
                    parseCustomerMsg(data)
                print "Sending " + sendStr
                if len(sendStr):
                    sock.sendall(sendStr)
#            except:
#                #broadcast_data(sock, "Client (%s, %s) offline..." % addr)
#                print "Client (%s, %s) offline..." % addr
#                sock.close()
#                CONNECTIONS.remove(sock)
#                continue

#    print 'Client sent: ' + data
#    reply = "You sent: " + data + "... right?"
#    conn.sendall(reply)

s.close()



