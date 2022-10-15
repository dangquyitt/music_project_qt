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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormListUser
{
public:
    QTableWidget *tableWidget;

    void setupUi(QWidget *FormListUser)
    {
        if (FormListUser->objectName().isEmpty())
            FormListUser->setObjectName(QString::fromUtf8("FormListUser"));
        FormListUser->resize(1104, 730);
        tableWidget = new QTableWidget(FormListUser);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 40, 1051, 561));

        retranslateUi(FormListUser);

        QMetaObject::connectSlotsByName(FormListUser);
    } // setupUi

    void retranslateUi(QWidget *FormListUser)
    {
        FormListUser->setWindowTitle(QCoreApplication::translate("FormListUser", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormListUser: public Ui_FormListUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLISTUSER_H
