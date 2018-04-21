#ifndef COMPDIALOG_H
#define COMPDIALOG_H

#include <QDialog>
#include "order.h"
#include "restaurantdatabase.h"

namespace Ui {
class CompDialog;
}

class CompDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CompDialog(QWidget *parent = 0);
    ~CompDialog();
    QString formatForList(MenuItem item);           //Format name and price into list standard
    void setOrder(int _orderNum, Order _order);
    Order getCompedItems();
    int getOrderNum();

private slots:
    void on_compButton_clicked();

    void on_doneButton_clicked();

signals:
    void compsReady();
private:
    int orderNum;
    Order order;
    Order compedItems;
    Ui::CompDialog *ui;
};

#endif // COMPDIALOG_H
