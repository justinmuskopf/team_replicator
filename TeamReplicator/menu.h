/*
 * Header file for Menu class
*/
#ifndef MENU_H
#define MENU_H

#include <QString>
#include <QPixmap>
#include <QMap>
#include <QVector>
#include <QDir>
#include <QStringList>


#define NUM_CATEGORIES 5

//Menu file filename
const QString MENU_FILE = QDir::currentPath() + "/menu.json";
//Categories in menu
const QStringList CATEGORIES = {"appetizers", "entrees", "desserts", "sides", "drinks"};
//ENUM of categories
typedef enum {APPETIZERS, ENTREES, DESSERTS, SIDES, DRINKS} Category;

//Menu item structure
struct MenuItem
{
    QString name;
    QString description;
    QPixmap image;
    float price;
    void print();
};

//A MenuVector is a Vector of MenuItems
typedef QVector<MenuItem> MenuVector;

//Menu class
class Menu
{
public:
    Menu();
    ~Menu();
    MenuVector getMenu(int type);       //Returns the menu of the type requested
    Category getCategory();             //Gets the current category of the user
    void setCategory(Category type);    //Set the category the user is viewing

private:
    MenuVector menu[NUM_CATEGORIES];    //Menu object
    Category currentCategory;           //Current category
};

#endif //MENU_H
