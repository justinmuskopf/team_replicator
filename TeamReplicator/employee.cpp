#include "employee.h"
#include <QDebug>

Employee::Employee()
{
    name = "";
    level = "";
    pin = "";
    ID = "";
}

void Employee::setName(QString _name)
{
    name = _name;
}

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

void Employee::setId(QString _ID)
{
    ID = _ID;
}

void Employee::setPin(QString _pin)
{
    pin = _pin;
}

QString Employee::getName()
{
    return name;
}

QString Employee::getLevel()
{
    return level;
}

QString Employee::getPin()
{
    return pin;
}

QString Employee::getId()
{
    return ID;
}

void Employee::print()
{
    qDebug() << "Employee: " << name;
    qDebug() << "ID:       " << ID;
    qDebug() << "Level:    " << level;
    qDebug() << "Pin:      " << pin;
}
