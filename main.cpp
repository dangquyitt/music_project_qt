#include "formlogin.h"
#include "mainwindow.h"
#include "userdao.h"
#include <QApplication>
#include"formaddtrack.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    FormLogin f;
//f.show();
//    FormAddTrack b;
//b.show();
    return a.exec();
}
