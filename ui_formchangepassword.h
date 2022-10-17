/********************************************************************************
** Form generated from reading UI file 'formchangepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCHANGEPASSWORD_H
#define UI_FORMCHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormChangePassword
{
public:
    QLabel *bgContainer;
    QLabel *bgContent;
    QLabel *label_10;
    QLabel *label_4;
    QLineEdit *oldPassword;
    QLabel *label_5;
    QLineEdit *newPassword;
    QLabel *label_3;
    QLineEdit *confirmPassword;
    QPushButton *btnCancel;
    QPushButton *btnSave;
    QPushButton *btnHidenNewPassword;
    QPushButton *btnHidenOldPassword;
    QLabel *stataus;
    QLabel *errorOldPassword;
    QLabel *errorNewPassword;
    QLabel *errorConfirmPassword;

    void setupUi(QWidget *FormChangePassword)
    {
        if (FormChangePassword->objectName().isEmpty())
            FormChangePassword->setObjectName(QString::fromUtf8("FormChangePassword"));
        FormChangePassword->resize(639, 631);
        bgContainer = new QLabel(FormChangePassword);
        bgContainer->setObjectName(QString::fromUtf8("bgContainer"));
        bgContainer->setGeometry(QRect(-20, -30, 701, 741));
        bgContent = new QLabel(FormChangePassword);
        bgContent->setObjectName(QString::fromUtf8("bgContent"));
        bgContent->setGeometry(QRect(60, 49, 521, 521));
        label_10 = new QLabel(FormChangePassword);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(110, 90, 421, 51));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 24pt \"Showcard Gothic\";\n"
"}\n"
""));
        label_4 = new QLabel(FormChangePassword);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 220, 161, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        oldPassword = new QLineEdit(FormChangePassword);
        oldPassword->setObjectName(QString::fromUtf8("oldPassword"));
        oldPassword->setGeometry(QRect(340, 220, 201, 31));
        oldPassword->setCursor(QCursor(Qt::IBeamCursor));
        oldPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_5 = new QLabel(FormChangePassword);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 300, 161, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        newPassword = new QLineEdit(FormChangePassword);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));
        newPassword->setGeometry(QRect(340, 300, 201, 31));
        newPassword->setCursor(QCursor(Qt::IBeamCursor));
        newPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_3 = new QLabel(FormChangePassword);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 380, 211, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"	font: 10pt \"Showcard Gothic\";\n"
"}\n"
""));
        confirmPassword = new QLineEdit(FormChangePassword);
        confirmPassword->setObjectName(QString::fromUtf8("confirmPassword"));
        confirmPassword->setGeometry(QRect(340, 380, 201, 31));
        confirmPassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnCancel = new QPushButton(FormChangePassword);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(140, 460, 171, 71));
        btnCancel->setCursor(QCursor(Qt::IBeamCursor));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        btnSave = new QPushButton(FormChangePassword);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(350, 460, 171, 71));
        btnSave->setCursor(QCursor(Qt::OpenHandCursor));
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        btnHidenNewPassword = new QPushButton(FormChangePassword);
        btnHidenNewPassword->setObjectName(QString::fromUtf8("btnHidenNewPassword"));
        btnHidenNewPassword->setGeometry(QRect(511, 304, 24, 21));
        btnHidenNewPassword->setCursor(QCursor(Qt::OpenHandCursor));
        btnHidenNewPassword->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background:white;\n"
"}"));
        btnHidenOldPassword = new QPushButton(FormChangePassword);
        btnHidenOldPassword->setObjectName(QString::fromUtf8("btnHidenOldPassword"));
        btnHidenOldPassword->setGeometry(QRect(511, 225, 24, 21));
        btnHidenOldPassword->setCursor(QCursor(Qt::OpenHandCursor));
        btnHidenOldPassword->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background:white;\n"
"}"));
        stataus = new QLabel(FormChangePassword);
        stataus->setObjectName(QString::fromUtf8("stataus"));
        stataus->setGeometry(QRect(270, 60, 151, 21));
        stataus->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	\n"
"	padding: 0 8px;\n"
"\n"
"	color: rgb(191, 0, 0);\n"
"	font: 8pt \"Showcard Gothic\";\n"
"\n"
"}\n"
""));
        errorOldPassword = new QLabel(FormChangePassword);
        errorOldPassword->setObjectName(QString::fromUtf8("errorOldPassword"));
        errorOldPassword->setGeometry(QRect(340, 250, 201, 16));
        errorOldPassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 6pt \"Segoergb(255, 21, 72) UI\";\n"
"	\n"
"	color: rgb(191, 0, 0);\n"
"	\n"
"	padding: 0 8px;\n"
"}"));
        errorNewPassword = new QLabel(FormChangePassword);
        errorNewPassword->setObjectName(QString::fromUtf8("errorNewPassword"));
        errorNewPassword->setGeometry(QRect(340, 330, 161, 16));
        errorNewPassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 6pt \"Segoergb(255, 21, 72) UI\";\n"
"	\n"
"	color: rgb(191, 0, 0);\n"
"	\n"
"	padding: 0 8px;\n"
"}"));
        errorConfirmPassword = new QLabel(FormChangePassword);
        errorConfirmPassword->setObjectName(QString::fromUtf8("errorConfirmPassword"));
        errorConfirmPassword->setGeometry(QRect(340, 410, 201, 16));
        errorConfirmPassword->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 6pt \"Segoergb(255, 21, 72) UI\";\n"
"	\n"
"	color: rgb(191, 0, 0);\n"
"	\n"
"	padding: 0 8px;\n"
"}"));

        retranslateUi(FormChangePassword);

        QMetaObject::connectSlotsByName(FormChangePassword);
    } // setupUi

    void retranslateUi(QWidget *FormChangePassword)
    {
        FormChangePassword->setWindowTitle(QCoreApplication::translate("FormChangePassword", "Form", nullptr));
        bgContainer->setText(QString());
        bgContent->setText(QString());
        label_10->setText(QCoreApplication::translate("FormChangePassword", "Change password", nullptr));
        label_4->setText(QCoreApplication::translate("FormChangePassword", "Old password:", nullptr));
        oldPassword->setText(QString());
        label_5->setText(QCoreApplication::translate("FormChangePassword", "new passwrod:", nullptr));
        newPassword->setText(QString());
        label_3->setText(QCoreApplication::translate("FormChangePassword", "Confirm password:", nullptr));
        confirmPassword->setText(QString());
        btnCancel->setText(QCoreApplication::translate("FormChangePassword", "Cancel", nullptr));
        btnSave->setText(QCoreApplication::translate("FormChangePassword", "Save", nullptr));
        btnHidenNewPassword->setText(QString());
        btnHidenOldPassword->setText(QString());
        stataus->setText(QString());
        errorOldPassword->setText(QString());
        errorNewPassword->setText(QString());
        errorConfirmPassword->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormChangePassword: public Ui_FormChangePassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCHANGEPASSWORD_H
