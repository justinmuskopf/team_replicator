#include "order.h"
#include <QDebug>
Order::Order()
{

}

MenuVector Order::getOrder()
{
    return order;
}

void Order::addToOrder(MenuItem item)
{
    order.push_back(item);
}

void Order::removeFromOrder(QString name)
{
    for (int i = 0; i < order.size(); i++)
    {
        if (order[i].name == name)
        {
            order.remove(i);
            break;
        }
    }
}

void Order::removeFromOrder(MenuItem item)
{
    for (int i = 0; i < order.size(); i++)
    {
        if (order[i].name == item.name)
        {
            order.remove(i);
            break;
        }
    }
}

void Order::printOrder()
{
    if (order.isEmpty())
        return;
    for (int i = 0; i < order.size(); i++)
    {
        qDebug() << "Order Loop";
        MenuItem item = order[i];
        item.print();
    }
}
