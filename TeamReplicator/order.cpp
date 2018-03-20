#include "order.h"

Order::Order()
{
    order = new MenuVector;
}

MenuVector *Order::getOrder()
{
    return order;
}

void Order::addToOrder(MenuItem item)
{
    order -> push_back(item);
}

void Order::removeFromOrder(MenuItem item)
{
    for (int i = 0; i < order -> size(); i++)
    {
        if (order -> at(i).name == item.name)
        {
            order -> remove(i);
            break;
        }
    }
}
