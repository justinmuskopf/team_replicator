#include "table.h"
#include <QDebug>

Table::Table()
{
    currentCustomer = nullptr;
    server = new QTcpSocket;

    //waitstaff = new Employee;

    orderStatus = NOT_PLACED;
}

Table::Table(int num) : Table()
{
    tableNum = num;
}

void Table::addCustomerToTable(Customer *customer)
{
    qDebug() << "Adding " << customer -> getName() << " to table...";
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
            return true;
    }
    return false;
}

void Table::clearTable()
{
    currentCustomer = nullptr;
    foreach (Customer* customer, customers)
    {
        delete customer;
    }
    customers.clear();

    orderNum = -1;
}

Customer *Table::getCustomerByName(QString name)
{
    //Try to find customer by name
    foreach (Customer *customer, customers)
    {
        if (customer -> getName() == name)
            return customer;
    }

    //Customer not found
    return (Customer *)nullptr;
}

void Table::readFromServer()
{
    if (!server -> isOpen())
        return;

    server -> write("S 1 2");
    server -> waitForReadyRead(1000);
    QString read = server -> read(1024).trimmed();

    qDebug() << "Server: " + read;
}

void Table::sendRefillsToServer()
{
    QByteArray toSend = "C " + QByteArray::number(tableNum) + " 2";
    server -> abort();
    server -> connectToHost(SERVER_HOST, SERVER_PORT);
    server -> waitForConnected(1000);
    server -> write(toSend);
}

void Table::setOrderStatus(int status)
{
    orderStatus = status;
}

int Table::getOrderStatus()
{
    return orderStatus;
}
