#ifndef MENU_H
#define MENU_H

#include <QString>
#include <QPixmap>
#include <QMap>

typedef QMap<QString, QPixmap> itemMap;

class Menu {

public:
    Menu();
    ~Menu();
    itemMap getDrinks();
    itemMap getAppetizers();
    itemMap getEntrees();
    itemMap getDesserts();
    itemMap getSides();

private:
    itemMap drinks;
    itemMap appetizers;
    itemMap entrees;
    itemMap desserts;
    itemMap sides;
};

#endif //ITEMS_H
