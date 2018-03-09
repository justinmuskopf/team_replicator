#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QDir>

#define ROW 4
#define COL 3

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

private:
    Ui::MainWindow *ui;
    const QString IMG_DIR = QDir::currentPath() +"/icon/";
    QPixmap logo;
    void hideAll();
    void goHome();
    QLabel *gridLabels[ROW][COL];
};

#endif // MAINWINDOW_H
