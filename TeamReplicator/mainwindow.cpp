#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QKeyEvent>
#include <QIcon>
#include "menu.h"

#define HOME_TAB 0
#define ORDER_TAB 1
#define LOGO_NAME "logo.png"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int num = 0;
    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COL; col++)
        {
            gridLabels[row][col] = new QLabel("test " + QString::number(num), this);
            QLabel *temp = gridLabels[row][col];
            QSize size(100, 100);
            temp -> setPixmap(QPixmap(IMG_DIR + QString::number(num) + ".ico").scaled(size, Qt::IgnoreAspectRatio));
            ui -> gridLayout -> addWidget(temp, row, col);
            num++;
        }
    }

    QPixmap test(IMG_DIR + "space.jpg");
    if (!test)
    {
        qDebug() << "Unable to open image " << IMG_DIR << "space.jpg";
    }
    ui -> spaceLabel -> setPixmap(test);
    ui -> spaceLabel -> show();

    logo = QPixmap(IMG_DIR + LOGO_NAME).scaled(QSize(ui -> logoLabel -> geometry().width(), ui -> logoLabel -> geometry().height()), Qt::KeepAspectRatio);
    ui -> logoLabel -> setPixmap(logo);

    ui -> orderNumLabel -> setText("Order #" + QString::number(qrand() % 500));

    ui -> passBox -> setFont(QFont("Times", 18));
    ui -> passBox -> setAlignment(Qt::AlignCenter);

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
{
    ui -> orderNumLabel -> hide();
    ui -> categoryLabel -> hide();
    ui -> restName -> hide();
    ui -> listView -> hide();
    for (int row = 0; row < ROW; row++)
    {
        for (int col = 0; col < COL; col++)
        {
            gridLabels[row][col] -> hide();
        }
    }
}

void MainWindow::goHome()
{
    hideAll();

}

void MainWindow::on_loginButton_clicked()
{
    QTextEdit *passBox = ui -> passBox;
    qDebug() << passBox -> toPlainText();
    passBox -> setText("");
    passBox -> setAlignment(Qt::AlignCenter);

}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    QString input = event -> text().toLower();
    qDebug() << input;
    if (ui -> tabWidget -> currentIndex() == 0 && input == "\r\n")
    {
        ui -> loginButton -> click();
    }
}
