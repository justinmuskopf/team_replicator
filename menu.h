#ifndef MENU_H
#define MENU_H

#include <QString>
#include <QPixmap>
#include <QMap>
#include <QVector>

struct MenuItem
{
    QString name;
    QString description;
    QPixmap image;
    float price;
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
    MenuVector drinks;
    MenuVector appetizers;
    MenuVector entrees;
    MenuVector desserts;
    MenuVector sides;
};

#endif //ITEMS_H
