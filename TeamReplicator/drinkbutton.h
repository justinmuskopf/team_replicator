#ifndef DRINKBUTTON_H
#define DRINKBUTTON_H
#include "menu.h"
#include <QPushButton>

class DrinkButton
{
public:
    DrinkButton();                                      //Default Constructor
    DrinkButton(MenuItem _drink, QPushButton *_button); //Initializing Constructor
    DrinkButton(QPushButton *_button);                  //Initializing Constructor
    void setText(QString text);                         //Set the text of the DrinkButton
    void setDrink(MenuItem _drink);                     //Set the drink
    void setEnabled(bool enabled);                      //Enable/disable DrinkButton
    MenuItem getDrink();                                //Get drink tied to button
private:
    MenuItem drink;                                     //Drink
    QPushButton *button;                                //PushButton
};

#endif // DRINKBUTTON_H
