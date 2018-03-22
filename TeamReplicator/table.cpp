#include "table.h"
#include <QDebug>

Table::Table()
{
    currentCustomer = NULL;
}

Table::Table(int num)
{
    tableNum = num;
}

void Table::addCustomerToTable(Customer *customer)
{
    customers.push_back(customer);
    if (customers.size() == 1)
        currentCustomer = customers[0];
}

void Table::printCustomers()
{
    foreach (Customer *customer, customers)
    {
       qDebug() << "-----------------------------";
       customer -> printInfo();
       qDebug() << "-----------------------------";
    }
}

bool Table::hasCustomers()
{
    return (customers.isEmpty()) ? false : true;
}

QVector<Customer*> Table::getCustomers()
{
    return customers;
}

Customer *Table::getCurrentCustomer()
{
    if (!hasCustomers())
    {
        qDebug() << "No customers at table!";
        return (Customer *)NULL;
    }
    if (currentCustomer == nullptr)
    {
        qDebug() << "Setting current customer to first...";
        currentCustomer = customers[0];
        return currentCustomer;
    }
    else
    {
        qDebug() << "Current customer not null...";
        return currentCustomer;
    }

}

Customer *Table::getNextCustomer()
{
    currentCustomer = (Customer *)NULL;
    foreach (Customer *customer, customers)
    {
        if (customer -> isOrderPlaced() == false)
        {
            qDebug() << "Next Customer: " << customer -> getName();
            currentCustomer = customer;
            break;
        }
    }
    return currentCustomer;
}

float Table::getTotal()
{
    float total = 0;
    foreach (Customer *customer, customers)
    {
        if (customer -> getOrder() -> getOrder().size() == 0)
            continue;
        total += customer -> getOrder() -> getTotal();
    }
    return total;
}

bool Table::isLastCustomer()
{
    int size = customers.size();
    for (int i = 0; i < size; i++)
    {
        if (customers[i] == currentCustomer && i == size - 1)
        {
            qDebug() << "Found";//&& i == size - 1)
            return true;
        }
    }
    return false;
}
