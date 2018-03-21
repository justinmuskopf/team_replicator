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
    Order *getOrder();
    void placeOrder();
    void printInfo();
    void addToOrder(MenuItem item);
    bool isOrderPlaced();
private:
    bool orderPlaced;
    Order *order;
    QString name;
    QString allergies;
};

#endif // CUSTOMER_H
