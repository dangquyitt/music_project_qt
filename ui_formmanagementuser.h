/********************************************************************************
** Form generated from reading UI file 'formmanagementuser.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMMANAGEMENTUSER_H
#define UI_FORMMANAGEMENTUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormManagementUser
{
public:
    QTableView *tableView;
    QPushButton *btnAddRole;

    void setupUi(QWidget *FormManagementUser)
    {
        if (FormManagementUser->objectName().isEmpty())
            FormManagementUser->setObjectName(QString::fromUtf8("FormManagementUser"));
        FormManagementUser->resize(682, 640);
        tableView = new QTableView(FormManagementUser);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(90, 40, 481, 481));
        btnAddRole = new QPushButton(FormManagementUser);
        btnAddRole->setObjectName(QString::fromUtf8("btnAddRole"));
        btnAddRole->setGeometry(QRect(270, 550, 83, 29));

        retranslateUi(FormManagementUser);

        QMetaObject::connectSlotsByName(FormManagementUser);
    } // setupUi

    void retranslateUi(QWidget *FormManagementUser)
    {
        FormManagementUser->setWindowTitle(QCoreApplication::translate("FormManagementUser", "Form", nullptr));
        btnAddRole->setText(QCoreApplication::translate("FormManagementUser", "Add role", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormManagementUser: public Ui_FormManagementUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMMANAGEMENTUSER_H
