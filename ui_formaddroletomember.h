/********************************************************************************
** Form generated from reading UI file 'formaddroletomember.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMADDROLETOMEMBER_H
#define UI_FORMADDROLETOMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAddRoleToMember
{
public:
    QSplitter *splitter;
    QLabel *label;
    QComboBox *selectUser;
    QSplitter *splitter_2;
    QLabel *label_2;
    QComboBox *selectRole;
    QSplitter *splitter_3;
    QPushButton *btnCancel;
    QPushButton *btnAccept;

    void setupUi(QWidget *FormAddRoleToMember)
    {
        if (FormAddRoleToMember->objectName().isEmpty())
            FormAddRoleToMember->setObjectName(QString::fromUtf8("FormAddRoleToMember"));
        FormAddRoleToMember->resize(400, 300);
        splitter = new QSplitter(FormAddRoleToMember);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(90, 70, 261, 28));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        selectUser = new QComboBox(splitter);
        selectUser->setObjectName(QString::fromUtf8("selectUser"));
        splitter->addWidget(selectUser);
        splitter_2 = new QSplitter(FormAddRoleToMember);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(90, 140, 261, 28));
        splitter_2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_2->addWidget(label_2);
        selectRole = new QComboBox(splitter_2);
        selectRole->setObjectName(QString::fromUtf8("selectRole"));
        splitter_2->addWidget(selectRole);
        splitter_3 = new QSplitter(FormAddRoleToMember);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(90, 190, 251, 29));
        splitter_3->setOrientation(Qt::Horizontal);
        btnCancel = new QPushButton(splitter_3);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        splitter_3->addWidget(btnCancel);
        btnAccept = new QPushButton(splitter_3);
        btnAccept->setObjectName(QString::fromUtf8("btnAccept"));
        splitter_3->addWidget(btnAccept);

        retranslateUi(FormAddRoleToMember);

        QMetaObject::connectSlotsByName(FormAddRoleToMember);
    } // setupUi

    void retranslateUi(QWidget *FormAddRoleToMember)
    {
        FormAddRoleToMember->setWindowTitle(QCoreApplication::translate("FormAddRoleToMember", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormAddRoleToMember", "Ng\306\260\341\273\235i d\303\271ng", nullptr));
        label_2->setText(QCoreApplication::translate("FormAddRoleToMember", "Role", nullptr));
        btnCancel->setText(QCoreApplication::translate("FormAddRoleToMember", "Cancel", nullptr));
        btnAccept->setText(QCoreApplication::translate("FormAddRoleToMember", "Accept", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormAddRoleToMember: public Ui_FormAddRoleToMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADDROLETOMEMBER_H
