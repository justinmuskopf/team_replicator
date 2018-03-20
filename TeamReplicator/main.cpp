#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    //Seed RNG
    qsrand(time(NULL));

    //Create the application and mainwindow
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //Begin GUI processes
    return a.exec();
}
