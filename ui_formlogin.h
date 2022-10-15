/********************************************************************************
** Form generated from reading UI file 'formlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLOGIN_H
#define UI_FORMLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLogin
{
public:
    QLabel *label;
    QLineEdit *inputUserName;
    QLabel *labelpassword;
    QLabel *title;
    QPushButton *btnRegister;
    QLabel *question;
    QPushButton *btnLogin;
    QLabel *errorPassword;
    QLabel *errorUserName;
    QLabel *labelUserName;
    QLineEdit *inputPassword;
    QPushButton *hidePasswordbt;

    void setupUi(QWidget *FormLogin)
    {
        if (FormLogin->objectName().isEmpty())
            FormLogin->setObjectName(QString::fromUtf8("FormLogin"));
        FormLogin->resize(918, 610);
        label = new QLabel(FormLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-520, 0, 1581, 621));
        label->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dang Quy/Downloads/backgroundlogin (2).jpg")));
        inputUserName = new QLineEdit(FormLogin);
        inputUserName->setObjectName(QString::fromUtf8("inputUserName"));
        inputUserName->setGeometry(QRect(714, 250, 141, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Banner Semibold"));
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(true);
        inputUserName->setFont(font);
        inputUserName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:1px;\n"
"\n"
"	padding: 0 8px;\n"
"	background:black;\n"
"	color:rgb(10,100,180);\n"
"}"));
        labelpassword = new QLabel(FormLogin);
        labelpassword->setObjectName(QString::fromUtf8("labelpassword"));
        labelpassword->setGeometry(QRect(610, 320, 111, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sitka Banner Semibold"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        labelpassword->setFont(font1);
        labelpassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        title = new QLabel(FormLogin);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(610, 150, 281, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sitka Banner Semibold"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setItalic(true);
        title->setFont(font2);
        title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"	\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnRegister = new QPushButton(FormLogin);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(730, 450, 111, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Segoe UI"));
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setItalic(false);
        btnRegister->setFont(font3);
        btnRegister->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 9pt \"Segoe UI\";\n"
"	border-radius:20px;\n"
"	padding: 0 8px;\n"
"	\n"
"	color:rgb(10,100,180);\n"
"}"));
        question = new QLabel(FormLogin);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(550, 460, 181, 20));
        question->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 9pt \"Segoe UI\";\n"
"	border-radius:20px;\n"
"	padding: 0 8px;\n"
"	\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnLogin = new QPushButton(FormLogin);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setGeometry(QRect(630, 380, 171, 61));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Sitka Banner Semibold"));
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setItalic(true);
        btnLogin->setFont(font4);
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"	\n"
"	border-radius:20px;\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        errorPassword = new QLabel(FormLogin);
        errorPassword->setObjectName(QString::fromUtf8("errorPassword"));
        errorPassword->setGeometry(QRect(620, 350, 211, 20));
        errorPassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        errorUserName = new QLabel(FormLogin);
        errorUserName->setObjectName(QString::fromUtf8("errorUserName"));
        errorUserName->setGeometry(QRect(620, 290, 211, 20));
        errorUserName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        labelUserName = new QLabel(FormLogin);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));
        labelUserName->setGeometry(QRect(610, 260, 111, 21));
        labelUserName->setFont(font1);
        labelUserName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        inputPassword = new QLineEdit(FormLogin);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));
        inputPassword->setGeometry(QRect(711, 321, 88, 21));
        inputPassword->setFont(font);
        inputPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border:2px;\n"
"	padding: 0 8px;\n"
"	background:black;\n"
"	color:rgb(10,100,180);\n"
"}"));
        hidePasswordbt = new QPushButton(FormLogin);
        hidePasswordbt->setObjectName(QString::fromUtf8("hidePasswordbt"));
        hidePasswordbt->setGeometry(QRect(806, 321, 24, 20));
        hidePasswordbt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"	border-radius:10px;\n"
"	color :red;\n"
"background:rgb(10,100,180);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/Dang Quy/Downloads/272425575_1339657069812848_5737658808820476326_n.png"), QSize(), QIcon::Normal, QIcon::Off);
        hidePasswordbt->setIcon(icon);
        label->raise();
        btnLogin->raise();
        errorPassword->raise();
        errorUserName->raise();
        inputUserName->raise();
        labelUserName->raise();
        labelpassword->raise();
        title->raise();
        btnRegister->raise();
        question->raise();
        inputPassword->raise();
        hidePasswordbt->raise();

        retranslateUi(FormLogin);

        QMetaObject::connectSlotsByName(FormLogin);
    } // setupUi

    void retranslateUi(QWidget *FormLogin)
    {
        FormLogin->setWindowTitle(QCoreApplication::translate("FormLogin", "Form", nullptr));
        label->setText(QString());
        inputUserName->setPlaceholderText(QCoreApplication::translate("FormLogin", "username", nullptr));
        labelpassword->setText(QCoreApplication::translate("FormLogin", "Password:", nullptr));
        title->setText(QCoreApplication::translate("FormLogin", "OOP MUSIC", nullptr));
        btnRegister->setText(QCoreApplication::translate("FormLogin", "Sigup now", nullptr));
        question->setText(QCoreApplication::translate("FormLogin", "Don't have an account ?", nullptr));
        btnLogin->setText(QCoreApplication::translate("FormLogin", "Login", nullptr));
        errorPassword->setText(QString());
        errorUserName->setText(QString());
        labelUserName->setText(QCoreApplication::translate("FormLogin", "Username:", nullptr));
        inputPassword->setPlaceholderText(QCoreApplication::translate("FormLogin", "password", nullptr));
        hidePasswordbt->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormLogin: public Ui_FormLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOGIN_H
