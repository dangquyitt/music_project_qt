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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAddRoleToMember
{
public:
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QComboBox *selectUser;
    QLabel *label_2;
    QComboBox *selectRole;
    QPushButton *btnCancel;
    QPushButton *btnAccept;

    void setupUi(QWidget *FormAddRoleToMember)
    {
        if (FormAddRoleToMember->objectName().isEmpty())
            FormAddRoleToMember->setObjectName(QString::fromUtf8("FormAddRoleToMember"));
        FormAddRoleToMember->resize(1107, 599);
        label_3 = new QLabel(FormAddRoleToMember);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-20, -30, 1131, 621));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        label_4 = new QLabel(FormAddRoleToMember);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 30, 461, 511));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label_5 = new QLabel(FormAddRoleToMember);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(480, 70, 161, 51));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 24pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        label = new QLabel(FormAddRoleToMember);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(410, 200, 70, 22));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        selectUser = new QComboBox(FormAddRoleToMember);
        selectUser->setObjectName(QString::fromUtf8("selectUser"));
        selectUser->setGeometry(QRect(590, 200, 82, 28));
        label_2 = new QLabel(FormAddRoleToMember);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(410, 260, 70, 22));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        selectRole = new QComboBox(FormAddRoleToMember);
        selectRole->setObjectName(QString::fromUtf8("selectRole"));
        selectRole->setGeometry(QRect(590, 260, 82, 28));
        btnCancel = new QPushButton(FormAddRoleToMember);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(410, 360, 111, 51));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        btnAccept = new QPushButton(FormAddRoleToMember);
        btnAccept->setObjectName(QString::fromUtf8("btnAccept"));
        btnAccept->setGeometry(QRect(610, 360, 101, 51));
        btnAccept->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        label_3->raise();
        label_4->raise();
        label_5->raise();

        retranslateUi(FormAddRoleToMember);

        QMetaObject::connectSlotsByName(FormAddRoleToMember);
    } // setupUi

    void retranslateUi(QWidget *FormAddRoleToMember)
    {
        FormAddRoleToMember->setWindowTitle(QCoreApplication::translate("FormAddRoleToMember", "Form", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("FormAddRoleToMember", "Role", nullptr));
        label->setText(QCoreApplication::translate("FormAddRoleToMember", "User:", nullptr));
        label_2->setText(QCoreApplication::translate("FormAddRoleToMember", "Role:", nullptr));
        btnCancel->setText(QCoreApplication::translate("FormAddRoleToMember", "Cancel", nullptr));
        btnAccept->setText(QCoreApplication::translate("FormAddRoleToMember", "Accept", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormAddRoleToMember: public Ui_FormAddRoleToMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADDROLETOMEMBER_H
