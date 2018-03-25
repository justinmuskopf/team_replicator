/*
 *  This header files declares the Restaurant class
*/
#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "table.h"
#include <QDate>


class Restaurant
{
public:
    Restaurant();                   //Default Constructor
    ~Restaurant();                  //Destructor
    Menu getMenu();                 //Return the entire menu
    MenuVector getMenu(int type);   //Get a menu by category
    void setMenuCategory(int type); //Set the currently viewed category
    Category getMenuCategory();     //Get the currently viewed category
    Table *getCurrentTable();       //Get the current table
    int getNewTableNumber();        //Returns an unused table number
private:
    static bool availableTables[];  //Available tables in the restaurant
    Table *currentTable;            //The current table
    QVector<Table *> tables;        //Vector of all tables in restaurant
    QVector<Employee> employees;    //Vector of employees
    Menu menu;                      //Restaurant's menu
    QDate currentDate;              //Current date
};

#endif // RESTAURANT_H
