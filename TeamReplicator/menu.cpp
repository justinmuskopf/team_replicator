#include "menu.h"
#include <QFile>
#include <QDebug>
#include <QApplication>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include "icons.h"

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
            {
                qDebug() << "Can't find image for " << item.name;
                item.image = QPixmap(NOT_AVAILABLE_ICON);
            }

            //item.image.scaled(100, 100, Qt::IgnoreAspectRatio);
            item.price = catObj["price"].toDouble();



            menu[i].push_back(item);
        }
    }

}

MenuVector Menu::getMenu(int type)
{
    return menu[type];
}

Category Menu::getCategory()
{
    return currentCategory;
}

void Menu::setCategory(Category type)
{
    currentCategory = type;
}

void MenuItem::print()
{
    qDebug() << "\nName: " << name;
    qDebug() << "Description: " << description;
    qDebug() << "Price: " << price;
}

Menu::~Menu()
{

}
