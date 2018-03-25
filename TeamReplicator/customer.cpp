#include "customer.h"
#include <QDebug>

//Default Constructor
Customer::Customer()
{
    //Create a new order
    order = new Order;
    orderPlaced = false;
}

//Initializing Constructor that sets name and allergies
Customer::Customer(QString _name, QString _allergies) : Customer()
{
    name = _name;
    allergies = _allergies;
}

//Return the order of this Customer
Order *Customer::getOrder()
{
    return order;
}

//Return the name of this Customer
QString Customer::getName()
{
    return name;
}

//Return the allergies of this Customer
QString Customer::getAllergies()
{
    return allergies;
}

//Add an item to this Customer's Order
void Customer::addToOrder(MenuItem item)
{
    order -> addToOrder(item);
}

//Place this Customer's Order
void Customer::placeOrder()
{
    orderPlaced = true;
}

//Print this Customer's Info
void Customer::printInfo()
{
    qDebug() << "Name: " << name;
    qDebug() << "Allergies: " << allergies;
    order -> printOrder();
}

//Has the Customer's order been placed?
bool Customer::isOrderPlaced()
{
    return orderPlaced;
}

//Destructor
Customer::~Customer()
{
    //Delete Order if allocated
    if (order != nullptr)
        delete order;
}
