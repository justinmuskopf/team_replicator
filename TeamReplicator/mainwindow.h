#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QDir>
#include "menu.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_backButton_clicked();

    void on_drinkButton_clicked();

    void on_ticketButton_clicked();

    void on_gameButton_clicked();

    void on_assistButton_clicked();

    void on_helpButton_clicked();

    void on_loginButton_clicked();

    void keyPressEvent(QKeyEvent *event);

    void on_oneButton_clicked();

    void on_twoButton_clicked();

    void on_threeButton_clicked();

    void on_fourButton_clicked();

    void on_fiveButton_clicked();

    void on_sixButton_clicked();

    void on_sevenButton_clicked();

    void on_eightButton_clicked();

    void on_nineButton_clicked();

    void on_clearButton_clicked();

    void on_zeroButton_clicked();

    void on_enterButton_clicked();

private:
    Ui::MainWindow *ui;
    const QString IMG_DIR = QDir::currentPath() +"/icon/";
    QPixmap logo;
    void hideAll();
    void goHome();
    Menu menu;
};

#endif // MAINWINDOW_H
