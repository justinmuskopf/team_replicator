#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee
{
public:
    Employee();
    void setName(QString _name);
    void setLevel(int lvl);
    void setPin(QString _pin);
    void setId(QString _ID);
    void print();
    QString getName();
    QString getLevel();
    QString getPin();
    QString getId();

private:
    enum {CUSTOMER = 1, KITCHEN, WAITSTAFF, MANAGER};
    QString name;
    QString level;
    QString pin;
    QString ID;
};

#endif // EMPLOYEE_H
