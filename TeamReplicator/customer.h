#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "order.h"

class Customer
{
public:
    Customer();
    Customer(QString _name, QString _allergies);
    QString getName();
    QString getAllergies();
    Order getOrder();
    void addToOrder(MenuItem item);
private:
    Order order;
    QString name;
    QString allergies;
};

#endif // CUSTOMER_H
