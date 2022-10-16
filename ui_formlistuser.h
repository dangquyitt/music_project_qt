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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormListUser
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QWidget *FormListUser)
    {
        if (FormListUser->objectName().isEmpty())
            FormListUser->setObjectName(QString::fromUtf8("FormListUser"));
        FormListUser->resize(1110, 641);
        tableWidget = new QTableWidget(FormListUser);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(120, 170, 901, 411));
        label = new QLabel(FormListUser);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 70, 901, 511));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label_3 = new QLabel(FormListUser);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(460, 80, 211, 51));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 24pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_2 = new QLabel(FormListUser);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, -10, 1121, 661));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        label_2->raise();
        label->raise();
        label_3->raise();
        tableWidget->raise();

        retranslateUi(FormListUser);

        QMetaObject::connectSlotsByName(FormListUser);
    } // setupUi

    void retranslateUi(QWidget *FormListUser)
    {
        FormListUser->setWindowTitle(QCoreApplication::translate("FormListUser", "Form", nullptr));
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("FormListUser", "UserList", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormListUser: public Ui_FormListUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLISTUSER_H
