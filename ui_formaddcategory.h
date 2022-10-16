/********************************************************************************
** Form generated from reading UI file 'formaddcategory.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMADDCATEGORY_H
#define UI_FORMADDCATEGORY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAddCategory
{
public:
    QPushButton *btnCancel;
    QPushButton *btnSave;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *status;
    QLabel *errorCategory;
    QSplitter *splitter;
    QLabel *label;
    QLineEdit *category;

    void setupUi(QWidget *FormAddCategory)
    {
        if (FormAddCategory->objectName().isEmpty())
            FormAddCategory->setObjectName(QString::fromUtf8("FormAddCategory"));
        FormAddCategory->resize(1053, 595);
        btnCancel = new QPushButton(FormAddCategory);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(370, 420, 121, 51));
        btnCancel->setCursor(QCursor(Qt::OpenHandCursor));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        btnSave = new QPushButton(FormAddCategory);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        btnSave->setGeometry(QRect(610, 420, 101, 51));
        btnSave->setCursor(QCursor(Qt::OpenHandCursor));
        btnSave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 14pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border:10px;\n"
"}"));
        label_2 = new QLabel(FormAddCategory);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-30, -20, 1081, 631));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        label_3 = new QLabel(FormAddCategory);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(350, 90, 391, 411));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label_4 = new QLabel(FormAddCategory);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(391, 140, 320, 51));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 24pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        status = new QLabel(FormAddCategory);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(480, 100, 131, 20));
        status->setLayoutDirection(Qt::LeftToRight);
        status->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        errorCategory = new QLabel(FormAddCategory);
        errorCategory->setObjectName(QString::fromUtf8("errorCategory"));
        errorCategory->setGeometry(QRect(542, 320, 151, 20));
        errorCategory->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 8pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        splitter = new QSplitter(FormAddCategory);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(390, 280, 301, 28));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        splitter->addWidget(label);
        category = new QLineEdit(splitter);
        category->setObjectName(QString::fromUtf8("category"));
        category->setStyleSheet(QString::fromUtf8("background:white;"));
        splitter->addWidget(category);
        label_2->raise();
        label_3->raise();
        label->raise();
        category->raise();
        btnCancel->raise();
        btnSave->raise();
        label_4->raise();
        splitter->raise();
        status->raise();
        errorCategory->raise();

        retranslateUi(FormAddCategory);

        QMetaObject::connectSlotsByName(FormAddCategory);
    } // setupUi

    void retranslateUi(QWidget *FormAddCategory)
    {
        FormAddCategory->setWindowTitle(QCoreApplication::translate("FormAddCategory", "Form", nullptr));
        btnCancel->setText(QCoreApplication::translate("FormAddCategory", "Cancel", nullptr));
        btnSave->setText(QCoreApplication::translate("FormAddCategory", "Save", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("FormAddCategory", "Addcategory", nullptr));
        status->setText(QString());
        errorCategory->setText(QString());
        label->setText(QCoreApplication::translate("FormAddCategory", "Category:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormAddCategory: public Ui_FormAddCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADDCATEGORY_H
