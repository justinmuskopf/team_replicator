#include "table.h"
#include <QDebug>

Table::Table()
{

}

Table::Table(int num)
{
    tableNum = num;
}

void Table::addCustomerToTable(Customer *customer)
{
    customers.push_back(customer);
}

void Table::printCustomers()
{
    foreach (Customer *customer, customers)
    {
        qDebug() << customer -> getName();
        qDebug() << customer -> getAllergies();
    }
}
