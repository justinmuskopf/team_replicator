#include "restaurantdatabase.h"
#include <QApplication>

RestaurantDatabase::RestaurantDatabase()
{
    addDatabase(DB_TYPE);
    setHostName(DB_HOST);
    setDatabaseName(DB_NAME);
    setUserName(DB_USER);
    setPassword(DB_PASS);
    if (!open())
        QApplication::quit();
}
