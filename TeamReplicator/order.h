/*
 *  This header files declares the Order class
*/
#ifndef ORDER_H
#define ORDER_H

#include "menu.h"
#include <QString>

class Order
{
public:
    Order();   //Default Constructor
    MenuVector getOrder();              //Return the MenuVector of Items
    void addToOrder(MenuItem item);     //Add item to order
    void removeFromOrder(QString name); //Remove from order by name
    void removeFromOrder(MenuItem item);//Remove from order by item
    void printOrder();                  //Print order to screen
    void addToTotal(float add);         //Add item's price to total
    float getTotal();                   //Return order subtotal
    void subtractFromTotal(float sub);  //Subtract from order subtotal
    void resetOrder();                  //Reset the current order
    MenuItem getDrink();                //Returns the drink on an order
    void setCoupon(int coup);
    QString getCoupon();
    void setTableName(QString);
    QString getTableName();
    void updatePromoState(int state);  //Updates promotion tracker to next state
    int getPromoState();                //Returns promotion tracker's state
    void addToCombo(float val);                  //Holds value of drink/dessert combo items
    float getComboTotal();              //Get total value for promotion application
    void resetCombo();                  //Resets Promotion value
    void setOrder(MenuVector);

private:
    MenuVector order;                   //Vector of MenuItems representing an order
    MenuItem drink;                     //What the Customer is drinking 
    float total;                        //Subtotal of all items
    QString coupon;
    QString tableName;
    int numShirts;
    int numEntrees;
    int promoState;                     //Tracks promotion progression
                                        //-1: inactive, 0: active, 1: drink added, 2: dessert added
    float comboTotal;
};

#endif // ORDER_H
