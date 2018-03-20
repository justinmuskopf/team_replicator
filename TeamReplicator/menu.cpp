/*
 * Implementation of the menu class
*/
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
    //Open the menu file and check for error
    QFile menuFile(MENU_FILE);
    if (!menuFile.open(QIODevice::ReadOnly))
    {
        qDebug() << "Menu File: " << MENU_FILE << " Unable to Be Opened...";
        QApplication::quit();
    }

    //Convert the file into a JSON document
    QJsonDocument jsonDoc = QJsonDocument::fromJson(menuFile.readAll());
    QJsonObject menuObj = jsonDoc.object();

    //Close the menu file
    menuFile.close();

    //Loop through all categories
    for (int i = 0; i < NUM_CATEGORIES; i++)
    {
        qDebug() << "Loop" << i << " - " << CATEGORIES[i];

        //Create a jsonArray to retrieve all objects of this category
        QJsonArray catArr = menuObj[CATEGORIES[i]].toArray();
        foreach (const QJsonValue & val, catArr)
        {
            //Create temporary menu item and initialize it with document values
            MenuItem item;
            QJsonObject catObj = val.toObject();
            item.name = catObj["name"].toString();
            item.description = catObj["description"].toString();
            item.price = catObj["price"].toDouble();
            item.image = QPixmap(catObj["filename"].toString());
            if (!item.image)
            {
                qDebug() << "Can't find image for " << item.name;
                item.image = QPixmap(NOT_AVAILABLE_ICON);
            }

            //Add item to menu
            menu[i].push_back(item);
        }
    }

}

//Return the menu of requested category
MenuVector Menu::getMenu(int type)
{
    return menu[type];
}

//Return the current category
Category Menu::getCategory()
{
    return currentCategory;
}

//Set the current category
void Menu::setCategory(Category type)
{
    currentCategory = type;
}

//Print a menu item to debug console
void MenuItem::print()
{
    qDebug() << "\nName: " << name;
    qDebug() << "Description: " << description;
    qDebug() << "Price: " << price;
}

//Default destructor
Menu::~Menu()
{

}
