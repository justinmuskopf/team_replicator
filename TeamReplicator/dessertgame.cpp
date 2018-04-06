#include "dessertgame.h"
//#include "ui_mainwindow.h"
#include "QDebug"
#include <cstdlib>
#include <QMessageBox>
//#include "mainwindow.h"

dGame::dGame()
{
    wonGame = false;
}

void dGame::evalChoice(int pick)
{
    srand(time(NULL));
    int winningNum = rand() % 5 + 1;

    if(pick == winningNum)
    {
        wonGame = true;

        QMessageBox winBox;
        winBox.setWindowTitle("The Replicator");
        winBox.setText("That's my number! You get a free dessert! Printing now...");
        winBox.setStandardButtons(QMessageBox::Ok);
        winBox.setStyleSheet("background-color: rgb(188, 188, 188);\nfont: 57 20pt \"Counter-Strike\";");
        winBox.exec();
        return;
    }
    else
    {
        QMessageBox lostBox;
        lostBox.setWindowTitle("The Replicator");
        lostBox.setText("Better luck next time!");
        lostBox.setStandardButtons(QMessageBox::Ok);
        lostBox.setStyleSheet("background-color: rgb(188, 188, 188);\nfont: 57 20pt \"Counter-Strike\";");

        if(lostBox.exec() == QMessageBox::Ok)
        {
            return;
        }

    }

}
