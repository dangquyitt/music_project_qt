#include <QApplication>
//#include "formlistuser.h"
#include "formlogin.h"
//#include "formregister.h"
#include "mainwindow.h"
#include"formlistuser.h"
#include"formprofile.h"
#include"formaddcategory.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//   MainWindow mainWindow;
//   mainWindow.show();
//    FormListUser formListUser;
//    formListUser.show();
//    FormRegister formRegister;
//  formRegister.show();
 FormLogin f;
 f.show();
//    FormAddTrack f;
//    f.show();
//  f.show();
//    FormProfile formProfile;
//    formProfile .show();
//     FormAddRoleToMember artmb;
//       artmb.show();
//    FormAddCategory formAdCategory;
//    formAdCategory.show();
    return a.exec();
}
