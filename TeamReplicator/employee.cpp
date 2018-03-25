#include "employee.h"
#include <QDebug>

//Default Constructor
Employee::Employee()
{
    //Init all parameters to empty
    //A little pedantic...
    name = "";
    level = "";
    pin = "";
    ID = "";
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
