/********************************************************************************
** Form generated from reading UI file 'formlistuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLISTUSER_H
#define UI_FORMLISTUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormListUser
{
public:
    QTableWidget *tableWidget;
    QLabel *bgContent;
    QLabel *label_3;
    QPushButton *btnCancel;
    QLabel *bgContainer;

    void setupUi(QWidget *FormListUser)
    {
        if (FormListUser->objectName().isEmpty())
            FormListUser->setObjectName(QString::fromUtf8("FormListUser"));
        FormListUser->resize(1000, 663);
        tableWidget = new QTableWidget(FormListUser);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(28, 90, 941, 481));
        bgContent = new QLabel(FormListUser);
        bgContent->setObjectName(QString::fromUtf8("bgContent"));
        bgContent->setGeometry(QRect(28, 21, 941, 621));
        bgContent->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label_3 = new QLabel(FormListUser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(418, 30, 211, 51));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 24pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnCancel = new QPushButton(FormListUser);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(78, 580, 841, 51));
        btnCancel->setStyleSheet(QString::fromUtf8("#QPushButton{\n"
"\n"
"border:20px;\n"
"}"));
        bgContainer = new QLabel(FormListUser);
        bgContainer->setObjectName(QString::fromUtf8("bgContainer"));
        bgContainer->setGeometry(QRect(0, -40, 1001, 741));
        bgContainer->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Tong-hop-cac-hinh-anh-background-dep-nhat-21.jpg")));
        bgContainer->raise();
        bgContent->raise();
        label_3->raise();
        tableWidget->raise();
        btnCancel->raise();

        retranslateUi(FormListUser);

        QMetaObject::connectSlotsByName(FormListUser);
    } // setupUi

    void retranslateUi(QWidget *FormListUser)
    {
        FormListUser->setWindowTitle(QCoreApplication::translate("FormListUser", "Form", nullptr));
        bgContent->setText(QString());
        label_3->setText(QCoreApplication::translate("FormListUser", "UserList", nullptr));
        btnCancel->setText(QCoreApplication::translate("FormListUser", "Cancel", nullptr));
        bgContainer->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormListUser: public Ui_FormListUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLISTUSER_H
