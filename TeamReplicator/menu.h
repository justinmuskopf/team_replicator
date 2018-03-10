#ifndef MENU_H
#define MENU_H

#include <QString>
#include <QPixmap>
#include <QMap>
#include <QVector>
#include <QDir>
#include <QStringList>


#define NUM_CATEGORIES 5

const QString MENU_FILE = QDir::currentPath() + "/menu.json";
const QStringList CATEGORIES = {"appetizers", "entrees", "desserts", "sides", "drinks"};
enum {APPETIZERS, ENTREES, DESSERTS, SIDES, DRINKS};

struct MenuItem
{
    QString name;
    QString description;
    QPixmap image;
    float price;
    void print();
};

typedef QVector<MenuItem> MenuVector;

class Menu
{

public:
    Menu();
    ~Menu();
    MenuVector getDrinks();
    MenuVector getAppetizers();
    MenuVector getEntrees();
    MenuVector getDesserts();
    MenuVector getSides();

private:
    MenuVector menu[NUM_CATEGORIES];
    /*)
    MenuVector drinks;
    MenuVector appetizers;
    MenuVector entrees;
    MenuVector desserts;
    MenuVector sides;
    */
};

#endif //ITEMS_H
