#include "restaurant.h"

bool Restaurant::availableTables[NUM_TABLES];

Restaurant::Restaurant()
{
    //Set all tables to available
    for (int i = 0; i < NUM_TABLES; i++)
         availableTables[i] = true;

    currentTable = NULL;

    currentDate = QDate::currentDate();
}

Menu Restaurant::getMenu()
{
    return menu;
}

MenuVector Restaurant::getMenu(int type)
{
    return menu.getMenu(type);
}

void Restaurant::setMenuCategory(int type)
{
    menu.setCategory((Category)type);
}

Category Restaurant::getMenuCategory()
{
    return menu.getCategory();
}

Table* Restaurant::getCurrentTable()
{
    if (currentTable == NULL)
        currentTable = new Table(getNewTableNumber());

    return currentTable;
}

int Restaurant::getNewTableNumber()
{
    for (int i = 0; i < NUM_TABLES; i++)
        if (availableTables[i] == true)
        {
            availableTables[i] = false;
            return i;
        }
    return -1;
}

Restaurant::~Restaurant()
{
    foreach (Table *table, tables)
    {
        delete table;
    }
}
