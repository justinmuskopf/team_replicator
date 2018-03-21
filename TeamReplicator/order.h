#ifndef ORDER_H
#define ORDER_H

#include "menu.h"

class Order
{
public:
    Order();
    MenuVector getOrder();
    void addToOrder(MenuItem item);
    void removeFromOrder(QString name);
    void removeFromOrder(MenuItem item);
    void printOrder();
private:
    MenuVector order;
};

#endif // ORDER_H
