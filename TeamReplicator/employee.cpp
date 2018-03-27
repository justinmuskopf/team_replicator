#include "employee.h"
#include <QDebug>
#include <QTimer>

#define POLL_PERIOD 3000

//Default Constructor
Employee::Employee()
{
    //Init all parameters to empty
    //A little pedantic...
    name = "";
    level = "";
    pin = "";
    ID = "";

    server = new QTcpSocket;
    connectToServer();
    QTimer::singleShot(POLL_PERIOD, this, SLOT(pollServer()));
}

//Set the name of the Employee
void Employee::setName(QString _name)
{
    name = _name;
}

//Set the level of the Employee to its String equivalent
void Employee::setLevel(int lvl)
{
    switch(lvl)
    {
        case CUSTOMER:
            level = "customer";
        break;
        case KITCHEN:
            level = "kitchen";
        break;
        case WAITSTAFF:
            level = "waitstaff";
        break;
        case MANAGER:
            level = "manager";
        break;
        default:
            level = "";
    }
}

//Set the ID of the Employee
void Employee::setId(QString _ID)
{
    ID = _ID;
}

//Set the Pin of the Employee
void Employee::setPin(QString _pin)
{
    pin = _pin;
}

//Return the name of the Employee
QString Employee::getName()
{
    return name;
}

//Return the level of the Employee
QString Employee::getLevel()
{
    return level;
}

//Return the pin of the Employee (SUPER SECURE)
QString Employee::getPin()
{
    return pin;
}

//Return the ID of the Employee
QString Employee::getId()
{
    return ID;
}

//Print the Employee's info
void Employee::print()
{
    qDebug() << "Employee: " << name;
    qDebug() << "ID:       " << ID;
    qDebug() << "Level:    " << level;
    qDebug() << "Pin:      " << pin;
}

void Employee::readFromServer()
{
    server -> write("S 1 2");
    QString read = server -> readAll();
    qDebug() << read;
}

void Employee::pollServer()
{
        if (server -> state() != QTcpSocket::ConnectedState)
            connectToServer();
        server -> write("S 1 5");
        server -> waitForReadyRead(1000);
        QString read = server -> readAll();
        if (read.length() > 0)
            qDebug() << read;
        else
            qDebug() << "Nothing to read from server...";
        QTimer::singleShot(POLL_PERIOD, this, SLOT(pollServer()));
}

Employee::~Employee()
{
    delete server;
}

void Employee::connectToServer()
{
    qDebug () << "Connecting to server...";
    server -> abort();
    server -> connectToHost("localhost", 9292);
}
