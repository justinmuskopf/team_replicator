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
typedef enum {APPETIZERS, ENTREES, DESSERTS, SIDES, DRINKS} Category;

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
    MenuVector getMenu(int type);
    Category getCategory();
    void setCategory(Category type);

private:
    MenuVector menu[NUM_CATEGORIES];
    Category currentCategory;
    /*)
    MenuVector drinks;
    MenuVector appetizers;
    MenuVector entrees;
    MenuVector desserts;
    MenuVector sides;
    */
};

#endif //ITEMS_H
