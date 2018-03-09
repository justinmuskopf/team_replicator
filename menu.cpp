#include "menu.h"
#include <QFile>

Menu::Menu()
{

}

itemMap Menu::getDrinks()
{
    return drinks;
}

itemMap Menu::getAppetizers()
{
    return appetizers;
}

itemMap Menu::getEntrees()
{
    return entrees;
}

itemMap Menu::getSides()
{
    return sides;
}

itemMap Menu::getDesserts()
{
    return desserts;
}
