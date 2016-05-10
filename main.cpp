<<<<<<< 61ddbc132891cf9533228634c5d59b0c5d30fb7b
#include "mainwindow.h"
#include <QApplication>
#include <mysql.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("icon.ico"));
    MainWindow w;
    w.show();
    return a.exec();
}
=======
#include "mainwindow.h"
#include <QApplication>
#include <mysql.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon("icon.ico"));
    MainWindow w;
    w.show();
    return a.exec();
}
>>>>>>> final version
