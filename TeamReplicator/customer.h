#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "order.h"
#include <QListWidget>

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
    ~Customer();
private:
    bool orderPlaced;
    Order *order;
    QString name;
    QString allergies;
};

#endif // CUSTOMER_H
