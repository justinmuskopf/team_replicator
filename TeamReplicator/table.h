/*
 *  This header files declares the Table class
*/
#ifndef TABLE_H
#define TABLE_H

#include <QVector>
#include <QTcpServer>
#include "customer.h"
#include "employee.h"
#include <QThread>

#define NUM_TABLES 17 //Number of tables in restaurant
#define SERVER_HOST "se1.cse.unt.edu"
#define SERVER_PORT 9292

enum {
    NOT_PLACED,
    PLACED,
    PREPARING,
    READY,
    ON_THE_WAY,
    DELIVERED
};

class Table
{
public:
    Table();                                    //Default Constructor
    Table(int num);                             //Initializing Constructor
    QVector<Customer*> getCustomers();          //Return Customers at table
    void addCustomerToTable(Customer *customer);//Add a Customer to the table
    void setWaitstaff(Employee *ws);            //Set the WaitStaff attending the Table
    Customer *getCurrentCustomer();             //Get the current Customer in focus
    Customer *getNextCustomer();                //Get the next Customer at Table
    Customer *getCustomerByName(QString name);  //Get a customer by their name
    void printCustomers();                      //Print info of all Customers at Table
    bool hasCustomers();                        //Is the Table empty?
    bool isLastCustomer();                      //Last Customer in focus?
    float getTotal();                           //Return the subtotal of all Orders at table
    void clearTable();                          //Clear the Table of Customers
    void readFromServer();
    void sendRefillsToServer();
    void setOrderStatus(int);
    int getOrderStatus();
private:
    unsigned int tableNum;                      //The table number
    int orderNum;                               //Current Order number
    int orderStatus;
    Customer *currentCustomer;                  //Current Customer in focus
    QVector<Customer*> customers;               //All Customers at table
    Employee *waitstaff;                        //WaitStaff attending table
    QTcpSocket *server;
};

#endif // TABLE_H
