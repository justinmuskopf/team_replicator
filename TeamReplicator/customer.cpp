#include "customer.h"
#include <QDebug>

Customer::Customer()
{
    order = new Order;
    orderPlaced = false;
}

Customer::Customer(QString _name, QString _allergies) : Customer()
{
    name = _name;
    allergies = _allergies;
}

Order *Customer::getOrder()
{
    return order;
}

QString Customer::getName()
{
    return name;
}

QString Customer::getAllergies()
{
    return allergies;
}

void Customer::addToOrder(MenuItem item)
{
    order -> addToOrder(item);
}

void Customer::placeOrder()
{
    orderPlaced = true;
}

void Customer::printInfo()
{
    qDebug() << "Name: " << name;
    qDebug() << "Allergies: " << allergies;
    order -> printOrder();
}

bool Customer::isOrderPlaced()
{
    return orderPlaced;
}

Customer::~Customer()
{
    if (order != nullptr)
        delete order;
}
