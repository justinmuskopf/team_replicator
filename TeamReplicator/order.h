/*
 *  This header files declares the Order class
*/
#ifndef ORDER_H
#define ORDER_H

#include "menu.h"

class Order
{
public:
    Order();                            //Default Constructor
    MenuVector getOrder();              //Return the MenuVector of Items
    void addToOrder(MenuItem item);     //Add item to order
    void removeFromOrder(QString name); //Remove from order by name
    void removeFromOrder(MenuItem item);//Remove from order by item
    void printOrder();                  //Print order to screen
    void addToTotal(float add);         //Add item's price to total
    float getTotal();                   //Return order subtotal
    void subtractFromTotal(float sub);  //Subtract from order subtotal
    void resetOrder();                  //Reset the current order
    MenuItem getDrink();                 //Returns the drink on an order
private:
    MenuVector order;                   //Vector of MenuItems representing an order
    MenuItem drink;                     //What the Customer is drinking
    float total;                        //Subtotal of all items
};

#endif // ORDER_H
