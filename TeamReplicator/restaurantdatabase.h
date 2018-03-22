#ifndef RESTAURANTDATABASE_H
#define RESTAURANTDATABASE_H

#include <QSqlDatabase>
#include "employee.h"

#define DB_USER "root"
#define DB_PASS ""
#define DB_HOST "localhost"
#define DB_NAME "replicator"
#define DB_TYPE "QMYSQL"

class RestaurantDatabase : public QSqlDatabase
{
public:
    RestaurantDatabase();
    Employee getWaitstaffByName(QString name);
};

#endif // RESTAURANTDATABASE_H
