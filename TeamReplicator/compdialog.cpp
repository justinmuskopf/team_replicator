#include "compdialog.h"
#include "ui_compdialog.h"
#include <QDate>
#include <QSql>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlDatabase>

CompDialog::CompDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CompDialog)
{
    ui->setupUi(this);
}

CompDialog::~CompDialog()
{
    delete ui;
}

QString CompDialog::formatForList(MenuItem item)
{
    QString formatted = "   " + item.name;
    for (int i = formatted.length(); i < 70; i++)
        formatted += ".";
    formatted += QString::number(item.price);

    return formatted;
}

void CompDialog::setOrder(int _orderNum, Order _order)
{
    order = _order;
    ui -> orderList -> clear();

    orderNum = _orderNum;

    foreach (MenuItem item, order.getOrder())
    {
        ui -> orderList -> addItem(formatForList(item));
    }
}

void CompDialog::on_compButton_clicked()
{
    QModelIndexList selected = ui -> orderList -> selectionModel() -> selectedIndexes();
    int row;
    if (selected.size() == 0)
        return;
    else
        row = selected[0].row();

    compedItems.addToOrder(order.getOrder()[row]);

    qDeleteAll(ui -> orderList -> selectedItems());
}


void CompDialog::on_doneButton_clicked()
{
    this -> hide();
    emit compsReady();
}

Order CompDialog::getCompedItems()
{
    return compedItems;
}

int CompDialog::getOrderNum()
{
    return orderNum;
}
