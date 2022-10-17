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
    QLabel *bgContainer;
    QLabel *bgContent;
    QLabel *label_10;
    QLineEdit *userName;
    QLineEdit *email;
    QPushButton *btnCancel;
    QLabel *label;
    QLineEdit *roleName;

    void setupUi(QWidget *FormProfile)
    {
        if (FormProfile->objectName().isEmpty())
            FormProfile->setObjectName(QString::fromUtf8("FormProfile"));
        FormProfile->resize(642, 623);
        label_2 = new QLabel(FormProfile);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 190, 118, 31));
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
        label_3->setGeometry(QRect(120, 360, 83, 31));
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
        label_4->setGeometry(QRect(120, 280, 121, 31));
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
        name->setGeometry(QRect(340, 190, 201, 31));
        name->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        bgContainer = new QLabel(FormProfile);
        bgContainer->setObjectName(QString::fromUtf8("bgContainer"));
        bgContainer->setGeometry(QRect(-10, 0, 701, 631));
        bgContainer->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        bgContent = new QLabel(FormProfile);
        bgContent->setObjectName(QString::fromUtf8("bgContent"));
        bgContent->setGeometry(QRect(50, 20, 541, 581));
        bgContent->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label_10 = new QLabel(FormProfile);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(230, 80, 200, 51));
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
        userName->setGeometry(QRect(340, 280, 201, 31));
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
        email->setGeometry(QRect(340, 360, 201, 31));
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnCancel = new QPushButton(FormProfile);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(250, 510, 171, 71));
        btnCancel->setCursor(QCursor(Qt::OpenHandCursor));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        label = new QLabel(FormProfile);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 450, 63, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        roleName = new QLineEdit(FormProfile);
        roleName->setObjectName(QString::fromUtf8("roleName"));
        roleName->setGeometry(QRect(340, 450, 201, 31));
        roleName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}\n"
""));
        bgContainer->raise();
        bgContent->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_10->raise();
        btnCancel->raise();
        name->raise();
        userName->raise();
        email->raise();
        label->raise();
        roleName->raise();

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
        bgContainer->setText(QString());
        bgContent->setText(QString());
        label_10->setText(QCoreApplication::translate("FormProfile", "PROFILE", nullptr));
        userName->setText(QString());
        email->setText(QString());
        btnCancel->setText(QCoreApplication::translate("FormProfile", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("FormProfile", "Role", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormProfile: public Ui_FormProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPROFILE_H
