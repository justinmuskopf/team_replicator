#include "order.h"
#include <QDebug>
Order::Order()
{
    //Menu menu;
    //drink = menu.getItem(DRINKS, "Water");
    coupon = "";
}

MenuVector Order::getOrder()
{
    return order;
}

void Order::addToOrder(MenuItem item)
{
    if (item.category == "drinks")
        drink = item;
    addToTotal(item.price);
    order.push_back(item);
}

void Order::removeFromOrder(QString name)
{
    for (int i = 0; i < order.size(); i++)
    {
        if (order[i].name == name)
        {
            subtractFromTotal(order[i].price);
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
            subtractFromTotal(order[i].price);
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
        MenuItem item = order[i];
        item.print();
    }
}



void Order::addToTotal(float add) {total += add;}
float Order::getTotal() {return total;}
void Order::subtractFromTotal(float sub) {total -= sub;}

void Order::resetOrder()
{
    total = 0;
    order.clear();
}

MenuItem Order::getDrink()
{
    return drink;
}

void Order::setCoupon(int coup)
{
    coupon=coup;
}

QString Order::getCoupon()
{
    return coupon;
}

