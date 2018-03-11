#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include "menu.h"
#include <QPushButton>
#include <QStack>

#define NUM_BUTTONS 5

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

    void on_tabWidget_currentChanged(int index);

    void on_appButton_clicked();

    void on_entButton_clicked();

    void on_driButton_clicked();

    void on_desButton_clicked();

    void on_sidButton_clicked();

    void on_addButton1_clicked();

    void on_menuBackButton_clicked();

    void on_menuRemoveButton_clicked();

private:
    Ui::MainWindow *ui;
    QPushButton *buttonArr[NUM_BUTTONS];
    QPixmap logo;
    bool backPressed;
    int lastPage;
    QStack<int> backStack;
    void hideAll();
    void goHome();
    void disableButtons();
    void enableButtons();
    void loadMenu(int type);
    Menu menu;
};

#endif // MAINWINDOW_H
