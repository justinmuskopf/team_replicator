#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "table.h"

class Restaurant
{
public:
    Restaurant();
    ~Restaurant();
    Menu getMenu();
    MenuVector getMenu(int type);
    void setMenuCategory(int type);
    Category getMenuCategory();
    Table *getCurrentTable();
    int getNewTableNumber();
private:
    static bool availableTables[];
    Table *currentTable;
    QVector<Table*> tables;
    QVector<Employee> employees;
    Menu menu;
};

#endif // RESTAURANT_H
