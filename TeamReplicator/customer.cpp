#include "customer.h"

Customer::Customer()
{

}

Customer::Customer(QString _name, QString _allergies)
{
    name = _name;
    allergies = _allergies;
}

Order Customer::getOrder()
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
    order.addToOrder(item);
}
