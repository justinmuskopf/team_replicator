#include "menu.h"
#include <QFile>
#include <QDebug>
#include <QApplication>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

Menu::Menu()
{
    qDebug() << "Constructor Called!";
    QFile menuFile(MENU_FILE);
    if (!menuFile.open(QIODevice::ReadOnly))
    {
        qDebug() << "Menu File: " << MENU_FILE << " Unable to Be Opened...";
        QApplication::quit();
    }

    QJsonDocument jsonDoc = QJsonDocument::fromJson(menuFile.readAll());
    QJsonObject menuObj = jsonDoc.object();

    for (int i = 0; i < NUM_CATEGORIES; i++)
    {
        qDebug() << "Loop" << i;
        QJsonArray catArr = menuObj[CATEGORIES[i]].toArray();
        foreach (const QJsonValue & val, catArr)
        {
            QJsonObject catObj = val.toObject();
            MenuItem item;
            item.name = catObj["name"].toString();
            item.description = catObj["description"].toString();
            item.image = QPixmap(catObj["filename"].toString());
            if (!item.image)
                qDebug() << "Can't find image for " << item.name;
            item.price = catObj["price"].toDouble();

            menu[i].push_back(item);
        }
    }

}

MenuVector Menu::getDrinks()
{
    return menu[DRINKS];
}

MenuVector Menu::getAppetizers()
{
    return menu[APPETIZERS];
}

MenuVector Menu::getEntrees()
{
    return menu[ENTREES];
}

MenuVector Menu::getSides()
{
    return menu[SIDES];
}

MenuVector Menu::getDesserts()
{
    return menu[DESSERTS];
}

Menu::~Menu()
{

}

void MenuItem::print()
{
    qDebug() << "\nName: " << name;
    qDebug() << "Description: " << description;
    qDebug() << "Price: " << price;
}
