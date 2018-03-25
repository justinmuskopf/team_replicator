#include "drinkbutton.h"

//Default Constructor
DrinkButton::DrinkButton()
{
    button = nullptr;
}

//Initializing Constructor
DrinkButton::DrinkButton(MenuItem _drink, QPushButton *_button)
{
    drink = _drink;
}

//Initializing Constructor
DrinkButton::DrinkButton(QPushButton *_button)
{
    //Disable button and set text to empty
    button = _button;
    button -> setText("");
    button -> setEnabled(false);
}

//Set drink of DrinkButton
void DrinkButton::setDrink(MenuItem _drink)
{
    //Set drink, enable button, and set Icon
    drink = _drink;
    button -> setEnabled(true);
    button -> setIcon(QIcon(drink.image));
    button -> setIconSize(QSize(75,75));
}

//Return the drink associated with button
MenuItem DrinkButton::getDrink()
{
    return drink;
}

//Set the text of the drink button
void DrinkButton::setText(QString text)
{
    if (button != nullptr)
        button -> setText(text);
}

//Set button enabled/disabled
void DrinkButton::setEnabled(bool enabled)
{
    if (button != nullptr)
        button -> setEnabled(enabled);
}
