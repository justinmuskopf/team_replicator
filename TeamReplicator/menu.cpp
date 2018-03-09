#include "menu.h"
#include <QFile>

#define APP_FILE ""
#define DRINK_FILE ""
#define DES_FILE ""
#define SIDE_FILE ""
#define ENT_FILE ""

Menu::Menu()
{

}

MenuVector Menu::getDrinks()
{
    return drinks;
}

MenuVector Menu::getAppetizers()
{
    return appetizers;
}

MenuVector Menu::getEntrees()
{
    return entrees;
}

MenuVector Menu::getSides()
{
    return sides;
}

MenuVector Menu::getDesserts()
{
    return desserts;
}
