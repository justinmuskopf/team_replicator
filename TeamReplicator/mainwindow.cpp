#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
#include <QIcon>


enum {HOME_TAB, ORDER_TAB, REFILLS_TAB, MENU_TAB};
#define LOGO_NAME "logo.png"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap test(IMG_DIR + "space.jpg");
    if (!test)
    {
        qDebug() << "Unable to open image " << IMG_DIR << "space.jpg";
    }
    ui -> spaceLabel -> setPixmap(test);
    //ui -> spaceLabel -> show();

    ui -> orderNumLabel -> setText("Order #" + QString::number(qrand() % 500));

    ui -> passwordBox -> setFont(QFont("Counter-Strike", 24));
    ui -> passwordBox -> setText("\n\n\t");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);

    showMaximized();
    //ui -> tabWidget -> showMaximized();

    QSize iconSize = ui -> appIcon -> size();
    ui -> appIcon-> setPixmap(QPixmap(IMG_DIR + CATEGORIES[APPETIZERS] + ".ico").scaled(iconSize, Qt::KeepAspectRatio));
    ui -> sidIcon-> setPixmap(QPixmap(IMG_DIR + CATEGORIES[SIDES] + ".ico").scaled(iconSize, Qt::KeepAspectRatio));
    ui -> desIcon-> setPixmap(QPixmap(IMG_DIR + CATEGORIES[DESSERTS] + ".ico").scaled(iconSize, Qt::KeepAspectRatio));
    ui -> entIcon-> setPixmap(QPixmap(IMG_DIR + CATEGORIES[ENTREES] + ".ico").scaled(iconSize, Qt::KeepAspectRatio));
    ui -> driIcon-> setPixmap(QPixmap(IMG_DIR + CATEGORIES[DRINKS] + ".ico").scaled(iconSize, Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_backButton_clicked()
{
    ui -> tabWidget -> setCurrentIndex(HOME_TAB);
}

void MainWindow::on_drinkButton_clicked()
{
    ui -> tabWidget -> setCurrentIndex(REFILLS_TAB);
}

void MainWindow::on_ticketButton_clicked()
{
    ui -> tabWidget -> setCurrentIndex(ORDER_TAB);
}

void MainWindow::on_gameButton_clicked()
{

}

void MainWindow::on_assistButton_clicked()
{

}

void MainWindow::on_helpButton_clicked()
{

}

void MainWindow::hideAll()
{/*
    ui -> orderNumLabel -> hide();
    ui -> listView -> hide();
    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COL; col++)
        {
            gridLabels[row][col] -> hide();
        }
    }*/
}

void MainWindow::goHome()
{
    hideAll();

}

void MainWindow::on_loginButton_clicked()
{
    //QTextEdit *passBox = ui -> passBox;
    //qDebug() << passBox -> toPlainText();
    //passBox -> setText("");
    //passBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QString input = event -> text().toLower();
    qDebug() << input;
}

void MainWindow::on_oneButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "1");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);

}

void MainWindow::on_twoButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "2");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_threeButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "3");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_fourButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "4");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_fiveButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "5");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_sixButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "6");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_sevenButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "7");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_eightButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "8");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_nineButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "9");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_zeroButton_clicked()
{
    ui -> passwordBox -> setText(ui -> passwordBox -> toPlainText() + "0");
    ui -> passwordBox -> setAlignment(Qt::AlignCenter);
}

void MainWindow::on_clearButton_clicked()
{
    ui -> passwordBox -> setText("\n\n\t");
}

void MainWindow::on_enterButton_clicked()
{
    QString pin = ui -> passwordBox -> toPlainText();
    ui -> passwordBox -> setText("\n\n\t");
    qDebug() << pin;
}
