#include "order.h"
#include "mainwindow.h"
#include <QDebug>

Order::Order()
{
    //Menu menu;
    //drink = menu.getItem(DRINKS, "Water");
    promoState=-1;
    comboTotal= 0.0;

}

MenuVector Order::getOrder()
{
    return order;
}

void Order::addToOrder(MenuItem item)
{
    int promoCheck;
    promoCheck = getPromoState();

    addToTotal(item.price);
    order.push_back(item);

    if (item.category == "entrees" && promoCheck != 0 ){ // trigger drink/dessert promo
        //prompt user for drink/dessert promo
        /*
        QMessageBox msgBox(QMessageBox::Information,
                           "PROMOTION",
                           "Buy one entree, get a drink and dessert for only $3.50!",
                           QMessageBox::Ok, this);
        msgBox.setStyleSheet("background-color: rgb(188, 188, 188);\nfont: 57 20pt \"Counter-Strike\";");
        msgBox.exec();
        */
        updatePromoState(0);
    }

    if (item.category == "drinks"){
        drink = item;
        //if entree has been ordered, but no drink or dessert added
        if (promoCheck==0){
            updatePromoState(1);
            addToCombo(item.price);
        }
        //if entree and dessert has been ordered
        else if (promoCheck==2){
            //add value of item to promotional discount
            addToCombo(item.price);
            float comboDiscount = getComboTotal();
            //apply discount
            subtractFromTotal(comboDiscount);
           // order.push_back("Discount Applied");//verify this
            addToTotal(3.50);
           // order.push_back("Drink/Dessert Promotion");//verify this
            // reset Flag and Combo value
            updatePromoState(-1);
            resetCombo();
        }
    }

    if (item.category == "desserts"){
        //if entree has been ordered, but no drink or dessert added
        if (promoCheck==0){
            updatePromoState(2);
            addToCombo(item.price);
        }
        //if entree and drink has been ordered
        else if (promoCheck==1){
            //add value of item to promotional discount
            addToCombo(item.price);
            float comboDiscount = getComboTotal();
            // Apply discount
            subtractFromTotal(comboDiscount);
          //  order.push_back("Discount Applied");//verify this
            addToTotal(3.50);
          //  order.push_back("Drink/Dessert Promotion");//verify this
            // Reset Flag and Combo value
            updatePromoState(-1);
            resetCombo();
        }
    }

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

void Order::updatePromoState(int state) {promoState = state;}
int Order::getPromoState() {return promoState;}
void Order::addToCombo(float val){comboTotal += val;}
float Order::getComboTotal(){return comboTotal;}
void Order::resetCombo(){comboTotal=0.0;}
