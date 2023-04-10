#include <QApplication>
#include "MainWindow/mainwindow.h"

int main (int argc, char *argv[])
{
    setbuf(stdout, 0);
    QApplication a (argc, argv);
    MainWindow w;
    w.show ();
    return QApplication::exec ();
}



