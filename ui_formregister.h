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
    QLabel *errorName;
    QLabel *errorEmail;
    QLabel *errorPasswordCheck;
    QPushButton *btnBack;
    QLabel *label_8;
    QLabel *stataus;

    void setupUi(QWidget *FormRegister)
    {
        if (FormRegister->objectName().isEmpty())
            FormRegister->setObjectName(QString::fromUtf8("FormRegister"));
        FormRegister->resize(939, 639);
        btnRegister = new QPushButton(FormRegister);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));
        btnRegister->setGeometry(QRect(570, 500, 111, 91));
        btnRegister->setCursor(QCursor(Qt::PointingHandCursor));
        btnRegister->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"font: 12pt \"Showcard Gothic\";\n"
"}\n"
""));
        label_6 = new QLabel(FormRegister);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-130, 0, 1621, 671));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        label_7 = new QLabel(FormRegister);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 130, 231, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(24);
        font.setBold(false);
        font.setItalic(false);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 24pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        label = new QLabel(FormRegister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 230, 121, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 8pt \"Showcard Gothic\";\n"
"}\n"
""));
        userName = new QLineEdit(FormRegister);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(440, 230, 141, 31));
        userName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"	\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        label_2 = new QLabel(FormRegister);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 300, 101, 18));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 8pt \"Showcard Gothic\";\n"
"}\n"
""));
        password = new QLineEdit(FormRegister);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(440, 300, 141, 31));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"	\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        label_5 = new QLabel(FormRegister);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 360, 161, 20));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 8pt \"Showcard Gothic\";\n"
"}\n"
""));
        passwordCheck = new QLineEdit(FormRegister);
        passwordCheck->setObjectName(QString::fromUtf8("passwordCheck"));
        passwordCheck->setGeometry(QRect(440, 360, 141, 31));
        passwordCheck->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        passwordCheck->setMaxLength(32766);
        label_4 = new QLabel(FormRegister);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 410, 90, 18));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 8pt \"Showcard Gothic\";\n"
"}\n"
""));
        name = new QLineEdit(FormRegister);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(440, 410, 141, 31));
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        label_3 = new QLabel(FormRegister);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(330, 480, 81, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 8pt \"Showcard Gothic\";\n"
"}\n"
""));
        email = new QLineEdit(FormRegister);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(440, 480, 141, 31));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	padding: 0 8px;\n"
"	\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 italic 11pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorUserName = new QLabel(FormRegister);
        errorUserName->setObjectName(QString::fromUtf8("errorUserName"));
        errorUserName->setGeometry(QRect(330, 270, 231, 16));
        errorUserName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 bold 10pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorName = new QLabel(FormRegister);
        errorName->setObjectName(QString::fromUtf8("errorName"));
        errorName->setGeometry(QRect(330, 450, 211, 21));
        errorName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 bold 10pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorEmail = new QLabel(FormRegister);
        errorEmail->setObjectName(QString::fromUtf8("errorEmail"));
        errorEmail->setGeometry(QRect(330, 520, 231, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sitka Banner Semibold"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setItalic(false);
        errorEmail->setFont(font1);
        errorEmail->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 bold 10pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        errorPasswordCheck = new QLabel(FormRegister);
        errorPasswordCheck->setObjectName(QString::fromUtf8("errorPasswordCheck"));
        errorPasswordCheck->setGeometry(QRect(330, 340, 221, 16));
        errorPasswordCheck->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	background:white;\n"
"	font: 600 bold 10pt \"Sitka Banner Semibold\";\n"
"}\n"
""));
        btnBack = new QPushButton(FormRegister);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(242, 528, 91, 41));
        btnBack->setCursor(QCursor(Qt::OpenHandCursor));
        btnBack->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	padding: 0 8px;\n"
"	border:20px;\n"
"	color:rgb(10,100,180);\n"
"	font: 12pt \"Showcard Gothic\";\n"
"}\n"
""));
        label_8 = new QLabel(FormRegister);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(250, 90, 441, 481));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        stataus = new QLabel(FormRegister);
        stataus->setObjectName(QString::fromUtf8("stataus"));
        stataus->setGeometry(QRect(390, 110, 141, 20));
        stataus->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 8pt \"Showcard Gothic\";\n"
"}\n"
""));
        label_6->raise();
        label_8->raise();
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
        errorName->raise();
        errorEmail->raise();
        errorPasswordCheck->raise();
        btnBack->raise();
        stataus->raise();

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
        label_3->setText(QCoreApplication::translate("FormRegister", "Email:", nullptr));
        email->setPlaceholderText(QCoreApplication::translate("FormRegister", "email", nullptr));
        errorUserName->setText(QString());
        errorName->setText(QString());
        errorEmail->setText(QString());
        errorPasswordCheck->setText(QString());
        btnBack->setText(QCoreApplication::translate("FormRegister", "Back", nullptr));
        label_8->setText(QString());
        stataus->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormRegister: public Ui_FormRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMREGISTER_H
