/********************************************************************************
** Form generated from reading UI file 'formprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPROFILE_H
#define UI_FORMPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormProfile
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *name;
    QLabel *label_5;
    QLabel *SRC;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *userName;
    QLineEdit *email;
    QLineEdit *password;
    QPushButton *btnCancel;
    QPushButton *btnSave;
    QLabel *label;
    QLineEdit *confirmPassword;

    void setupUi(QWidget *FormProfile)
    {
        if (FormProfile->objectName().isEmpty())
            FormProfile->setObjectName(QString::fromUtf8("FormProfile"));
        FormProfile->resize(1013, 623);
        label_2 = new QLabel(FormProfile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(340, 190, 118, 22));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        label_3 = new QLabel(FormProfile);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(340, 330, 83, 22));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        label_4 = new QLabel(FormProfile);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(340, 260, 121, 22));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        name = new QLineEdit(FormProfile);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(530, 190, 141, 24));
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_5 = new QLabel(FormProfile);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 390, 128, 22));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        SRC = new QLabel(FormProfile);
        SRC->setObjectName(QString::fromUtf8("SRC"));
        SRC->setGeometry(QRect(-10, 0, 1021, 631));
        SRC->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        label_9 = new QLabel(FormProfile);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 20, 541, 581));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label_10 = new QLabel(FormProfile);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(400, 80, 261, 51));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 24pt \"Showcard Gothic\";\n"
"}\n"
""));
        userName = new QLineEdit(FormProfile);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(530, 260, 141, 24));
        userName->setCursor(QCursor(Qt::ForbiddenCursor));
        userName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        email = new QLineEdit(FormProfile);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(530, 330, 141, 24));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        password = new QLineEdit(FormProfile);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(530, 390, 141, 24));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnCancel = new QPushButton(FormProfile);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(280, 500, 171, 71));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        btnSave = new QPushButton(FormProfile);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(600, 500, 161, 71));
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        label = new QLabel(FormProfile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 450, 111, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        confirmPassword = new QLineEdit(FormProfile);
        confirmPassword->setObjectName(QString::fromUtf8("confirmPassword"));
        confirmPassword->setGeometry(QRect(530, 450, 140, 28));
        confirmPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        SRC->raise();
        label_9->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_10->raise();
        btnCancel->raise();
        btnSave->raise();
        label->raise();
        name->raise();
        userName->raise();
        email->raise();
        password->raise();
        confirmPassword->raise();

        retranslateUi(FormProfile);

        QMetaObject::connectSlotsByName(FormProfile);
    } // setupUi

    void retranslateUi(QWidget *FormProfile)
    {
        FormProfile->setWindowTitle(QCoreApplication::translate("FormProfile", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("FormProfile", "Fullname:", nullptr));
        label_3->setText(QCoreApplication::translate("FormProfile", "Email:", nullptr));
        label_4->setText(QCoreApplication::translate("FormProfile", "Username:", nullptr));
        name->setText(QString());
        label_5->setText(QCoreApplication::translate("FormProfile", "Password:", nullptr));
        SRC->setText(QString());
        label_9->setText(QString());
        label_10->setText(QCoreApplication::translate("FormProfile", "PROFILE", nullptr));
        userName->setText(QString());
        email->setText(QString());
        password->setText(QString());
        btnCancel->setText(QCoreApplication::translate("FormProfile", "Cancel", nullptr));
        btnSave->setText(QCoreApplication::translate("FormProfile", "Save", nullptr));
        label->setText(QCoreApplication::translate("FormProfile", "Confirm:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormProfile: public Ui_FormProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPROFILE_H
