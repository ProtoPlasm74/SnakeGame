#include "gamemanager.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GameManager w;
    w.show();

    return a.exec();
}
