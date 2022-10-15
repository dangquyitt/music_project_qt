#include "formlogin.h"
#include <QApplication>
#include "formaddroletomember.h"
#include "formlistuser.h"
#include "mainwindow.h"
//#include "formregister.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
//    FormListUser formListUser;
//    formListUser.show();
//    FormRegister formRegister;
//    formRegister.show();
//    FormLogin f;
//    f.show();
//     FormAddRoleToMember artmb;
//       artmb.show();
    return a.exec();
}
