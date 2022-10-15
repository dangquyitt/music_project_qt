/********************************************************************************
** Form generated from reading UI file 'formregister.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMREGISTER_H
#define UI_FORMREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormRegister
{
public:
    QPushButton *btnRegister;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label;
    QLineEdit *userName;
    QLabel *label_2;
    QLineEdit *password;
    QLabel *label_5;
    QLineEdit *passwordCheck;
    QLabel *label_4;
    QLineEdit *name;
    QLabel *label_3;
    QLineEdit *email;
    QLabel *errorUserName;
    QLabel *errorPassword;
    QLabel *errorName;
    QLabel *errorEmail;
    QLabel *errorPasswordCheck;

    void setupUi(QWidget *FormRegister)
    {
        if (FormRegister->objectName().isEmpty())
            FormRegister->setObjectName(QString::fromUtf8("FormRegister"));
        FormRegister->resize(932, 647);
        btnRegister = new QPushButton(FormRegister);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(740, 568, 83, 41));
        btnRegister->setCursor(QCursor(Qt::PointingHandCursor));
        btnRegister->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        label_6 = new QLabel(FormRegister);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-590, 10, 1621, 641));
        label_6->setPixmap(QPixmap(QString::fromUtf8("C:/Users/Dang Quy/Downloads/backgroundlogin (2).jpg")));
        label_7 = new QLabel(FormRegister);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(630, 140, 211, 61));
        QFont font;
        font.setPointSize(24);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        label = new QLabel(FormRegister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 250, 99, 18));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        userName = new QLineEdit(FormRegister);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(730, 250, 111, 21));
        userName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        label_2 = new QLabel(FormRegister);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(600, 320, 101, 18));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        password = new QLineEdit(FormRegister);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(730, 310, 101, 41));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        label_5 = new QLabel(FormRegister);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(600, 380, 154, 18));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        passwordCheck = new QLineEdit(FormRegister);
        passwordCheck->setObjectName(QString::fromUtf8("passwordCheck"));
        passwordCheck->setGeometry(QRect(730, 380, 91, 23));
        passwordCheck->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        passwordCheck->setMaxLength(32766);
        label_4 = new QLabel(FormRegister);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(600, 440, 90, 18));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        name = new QLineEdit(FormRegister);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(730, 440, 94, 23));
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        label_3 = new QLabel(FormRegister);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(600, 500, 66, 18));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        email = new QLineEdit(FormRegister);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(730, 500, 131, 23));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorUserName = new QLabel(FormRegister);
        errorUserName->setObjectName(QString::fromUtf8("errorUserName"));
        errorUserName->setGeometry(QRect(610, 280, 211, 20));
        errorUserName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorPassword = new QLabel(FormRegister);
        errorPassword->setObjectName(QString::fromUtf8("errorPassword"));
        errorPassword->setGeometry(QRect(610, 350, 191, 20));
        errorPassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorName = new QLabel(FormRegister);
        errorName->setObjectName(QString::fromUtf8("errorName"));
        errorName->setGeometry(QRect(610, 470, 191, 21));
        errorName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorEmail = new QLabel(FormRegister);
        errorEmail->setObjectName(QString::fromUtf8("errorEmail"));
        errorEmail->setGeometry(QRect(610, 530, 171, 20));
        errorEmail->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorPasswordCheck = new QLabel(FormRegister);
        errorPasswordCheck->setObjectName(QString::fromUtf8("errorPasswordCheck"));
        errorPasswordCheck->setGeometry(QRect(610, 410, 181, 20));
        errorPasswordCheck->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	background:black;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        label_6->raise();
        label_7->raise();
        label->raise();
        userName->raise();
        label_2->raise();
        password->raise();
        label_5->raise();
        passwordCheck->raise();
        label_4->raise();
        name->raise();
        label_3->raise();
        email->raise();
        btnRegister->raise();
        errorUserName->raise();
        errorPassword->raise();
        errorName->raise();
        errorEmail->raise();
        errorPasswordCheck->raise();

        retranslateUi(FormRegister);

        QMetaObject::connectSlotsByName(FormRegister);
    } // setupUi

    void retranslateUi(QWidget *FormRegister)
    {
        FormRegister->setWindowTitle(QCoreApplication::translate("FormRegister", "Form", nullptr));
        btnRegister->setText(QCoreApplication::translate("FormRegister", "Register", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("FormRegister", "Register", nullptr));
        label->setText(QCoreApplication::translate("FormRegister", "Username:", nullptr));
        userName->setPlaceholderText(QCoreApplication::translate("FormRegister", "username", nullptr));
        label_2->setText(QCoreApplication::translate("FormRegister", "Password:", nullptr));
        password->setPlaceholderText(QCoreApplication::translate("FormRegister", "password", nullptr));
        label_5->setText(QCoreApplication::translate("FormRegister", "Confirm:", nullptr));
        passwordCheck->setPlaceholderText(QCoreApplication::translate("FormRegister", "comfirm", nullptr));
        label_4->setText(QCoreApplication::translate("FormRegister", "Fullname:", nullptr));
        name->setPlaceholderText(QCoreApplication::translate("FormRegister", "fullname", nullptr));
        label_3->setText(QCoreApplication::translate("FormRegister", "Email", nullptr));
        email->setPlaceholderText(QCoreApplication::translate("FormRegister", "email", nullptr));
        errorUserName->setText(QString());
        errorPassword->setText(QString());
        errorName->setText(QString());
        errorEmail->setText(QString());
        errorPasswordCheck->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormRegister: public Ui_FormRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMREGISTER_H
