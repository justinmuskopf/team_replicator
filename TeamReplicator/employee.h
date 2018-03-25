//Header file that declares the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>

class Employee
{
public:
    Employee();                 //Default Constructor
    void setName(QString _name);//Set the Employee's name
    void setLevel(int lvl);     //Set the Employee level
    void setPin(QString _pin);  //Set the Employee pin
    void setId(QString _ID);    //Set the Employee's ID
    void print();               //Print Employee info
    QString getName();          //Return employee's name
    QString getLevel();         //Return employee's level
    QString getPin();           //Return employee's pin
    QString getId();            //Return employee's ID

private:
    enum {CUSTOMER = 1, KITCHEN, WAITSTAFF, MANAGER}; //Employee Level ENUM
    QString name;               //Employee's name
    QString level;              //Employee's level
    QString pin;                //Employee's pin
    QString ID;                 //Employee's ID
};

#endif // EMPLOYEE_H
