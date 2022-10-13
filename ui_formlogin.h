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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormLogin
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QFormLayout *formLogin;
    QLabel *labelUserName;
    QLineEdit *inputUserName;
    QLabel *labelpassword;
    QLineEdit *inputPassword;
    QLabel *errorUserName;
    QLabel *errorPassword;
    QPushButton *btnLogin;

    void setupUi(QWidget *FormLogin)
    {
        if (FormLogin->objectName().isEmpty())
            FormLogin->setObjectName(QString::fromUtf8("FormLogin"));
        FormLogin->resize(400, 516);
        widget = new QWidget(FormLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 120, 234, 157));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        formLogin = new QFormLayout();
        formLogin->setObjectName(QString::fromUtf8("formLogin"));
        labelUserName = new QLabel(widget);
        labelUserName->setObjectName(QString::fromUtf8("labelUserName"));

        formLogin->setWidget(0, QFormLayout::LabelRole, labelUserName);

        inputUserName = new QLineEdit(widget);
        inputUserName->setObjectName(QString::fromUtf8("inputUserName"));

        formLogin->setWidget(0, QFormLayout::FieldRole, inputUserName);

        labelpassword = new QLabel(widget);
        labelpassword->setObjectName(QString::fromUtf8("labelpassword"));

        formLogin->setWidget(2, QFormLayout::LabelRole, labelpassword);

        inputPassword = new QLineEdit(widget);
        inputPassword->setObjectName(QString::fromUtf8("inputPassword"));

        formLogin->setWidget(2, QFormLayout::FieldRole, inputPassword);

        errorUserName = new QLabel(widget);
        errorUserName->setObjectName(QString::fromUtf8("errorUserName"));

        formLogin->setWidget(1, QFormLayout::FieldRole, errorUserName);

        errorPassword = new QLabel(widget);
        errorPassword->setObjectName(QString::fromUtf8("errorPassword"));

        formLogin->setWidget(3, QFormLayout::FieldRole, errorPassword);


        gridLayout->addLayout(formLogin, 0, 0, 1, 1);

        btnLogin = new QPushButton(widget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));

        gridLayout->addWidget(btnLogin, 1, 0, 1, 1);


        retranslateUi(FormLogin);

        QMetaObject::connectSlotsByName(FormLogin);
    } // setupUi

    void retranslateUi(QWidget *FormLogin)
    {
        FormLogin->setWindowTitle(QCoreApplication::translate("FormLogin", "Form", nullptr));
        labelUserName->setText(QCoreApplication::translate("FormLogin", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
        labelpassword->setText(QCoreApplication::translate("FormLogin", "M\341\272\255t kh\341\272\251u", nullptr));
        errorUserName->setText(QString());
        errorPassword->setText(QString());
        btnLogin->setText(QCoreApplication::translate("FormLogin", "\304\220\304\203ng Nh\341\272\255p", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormLogin: public Ui_FormLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLOGIN_H
