/********************************************************************************
** Form generated from reading UI file 'formaddtrack.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMADDTRACK_H
#define UI_FORMADDTRACK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAddTrack
{
public:
    QSpinBox *ratting;
    QLabel *label_5;
    QPushButton *btnAddMusic;
    QLabel *statusInsert;
    QPushButton *btnCancel;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;
    QLineEdit *musicName;
    QLabel *errorMusicName;
    QLabel *errorMusicUrl;
    QLabel *musicUrl;
    QPushButton *btnMusicUrl;
    QLabel *label_6;
    QLabel *musicImg;
    QLabel *errorMusicImg;
    QLabel *label_2;
    QPushButton *btnImgUrl;
    QLabel *label_3;
    QComboBox *category;
    QLabel *label_4;
    QSpinBox *releaseYear;

    void setupUi(QWidget *FormAddTrack)
    {
        if (FormAddTrack->objectName().isEmpty())
            FormAddTrack->setObjectName(QString::fromUtf8("FormAddTrack"));
        FormAddTrack->resize(985, 592);
        ratting = new QSpinBox(FormAddTrack);
        ratting->setObjectName(QString::fromUtf8("ratting"));
        ratting->setGeometry(QRect(580, 399, 71, 41));
        ratting->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	font: 9pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_5 = new QLabel(FormAddTrack);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(322, 405, 111, 20));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnAddMusic = new QPushButton(FormAddTrack);
        btnAddMusic->setObjectName(QString::fromUtf8("btnAddMusic"));
        btnAddMusic->setGeometry(QRect(610, 500, 101, 41));
        btnAddMusic->setCursor(QCursor(Qt::OpenHandCursor));
        btnAddMusic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"}"));
        statusInsert = new QLabel(FormAddTrack);
        statusInsert->setObjectName(QString::fromUtf8("statusInsert"));
        statusInsert->setGeometry(QRect(360, 40, 241, 20));
        statusInsert->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnCancel = new QPushButton(FormAddTrack);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(242, 490, 101, 61));
        btnCancel->setCursor(QCursor(Qt::OpenHandCursor));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_7 = new QLabel(FormAddTrack);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(-20, 0, 1001, 601));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        label_8 = new QLabel(FormAddTrack);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 30, 521, 531));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label_9 = new QLabel(FormAddTrack);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(360, 60, 241, 51));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 24pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        label = new QLabel(FormAddTrack);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 160, 121, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        musicName = new QLineEdit(FormAddTrack);
        musicName->setObjectName(QString::fromUtf8("musicName"));
        musicName->setGeometry(QRect(530, 160, 125, 28));
        musicName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"}"));
        errorMusicName = new QLabel(FormAddTrack);
        errorMusicName->setObjectName(QString::fromUtf8("errorMusicName"));
        errorMusicName->setGeometry(QRect(330, 190, 191, 20));
        errorMusicName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        errorMusicUrl = new QLabel(FormAddTrack);
        errorMusicUrl->setObjectName(QString::fromUtf8("errorMusicUrl"));
        errorMusicUrl->setGeometry(QRect(330, 240, 218, 19));
        errorMusicUrl->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        musicUrl = new QLabel(FormAddTrack);
        musicUrl->setObjectName(QString::fromUtf8("musicUrl"));
        musicUrl->setGeometry(QRect(584, 211, 130, 20));
        musicUrl->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnMusicUrl = new QPushButton(FormAddTrack);
        btnMusicUrl->setObjectName(QString::fromUtf8("btnMusicUrl"));
        btnMusicUrl->setGeometry(QRect(480, 210, 149, 20));
        btnMusicUrl->setCursor(QCursor(Qt::OpenHandCursor));
        btnMusicUrl->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 9pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_6 = new QLabel(FormAddTrack);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 210, 91, 20));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        musicImg = new QLabel(FormAddTrack);
        musicImg->setObjectName(QString::fromUtf8("musicImg"));
        musicImg->setGeometry(QRect(583, 259, 130, 20));
        musicImg->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        errorMusicImg = new QLabel(FormAddTrack);
        errorMusicImg->setObjectName(QString::fromUtf8("errorMusicImg"));
        errorMusicImg->setGeometry(QRect(330, 280, 221, 19));
        errorMusicImg->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}\n"
""));
        label_2 = new QLabel(FormAddTrack);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(320, 260, 91, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnImgUrl = new QPushButton(FormAddTrack);
        btnImgUrl->setObjectName(QString::fromUtf8("btnImgUrl"));
        btnImgUrl->setGeometry(QRect(470, 260, 163, 20));
        btnImgUrl->setCursor(QCursor(Qt::OpenHandCursor));
        btnImgUrl->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 9pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_3 = new QLabel(FormAddTrack);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(320, 310, 121, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        category = new QComboBox(FormAddTrack);
        category->setObjectName(QString::fromUtf8("category"));
        category->setGeometry(QRect(497, 307, 201, 28));
        category->setCursor(QCursor(Qt::OpenHandCursor));
        category->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	font: 9pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_4 = new QLabel(FormAddTrack);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(320, 354, 131, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        releaseYear = new QSpinBox(FormAddTrack);
        releaseYear->setObjectName(QString::fromUtf8("releaseYear"));
        releaseYear->setGeometry(QRect(580, 344, 71, 41));
        releaseYear->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	font: 9pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"}"));
        label_7->raise();
        label_8->raise();
        label->raise();
        musicName->raise();
        errorMusicUrl->raise();
        musicUrl->raise();
        btnMusicUrl->raise();
        label_6->raise();
        musicImg->raise();
        label_2->raise();
        btnImgUrl->raise();
        label_3->raise();
        category->raise();
        label_4->raise();
        releaseYear->raise();
        ratting->raise();
        label_5->raise();
        btnAddMusic->raise();
        statusInsert->raise();
        btnCancel->raise();
        label_9->raise();
        errorMusicImg->raise();
        errorMusicName->raise();

        retranslateUi(FormAddTrack);

        QMetaObject::connectSlotsByName(FormAddTrack);
    } // setupUi

    void retranslateUi(QWidget *FormAddTrack)
    {
        FormAddTrack->setWindowTitle(QCoreApplication::translate("FormAddTrack", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("FormAddTrack", "Rate", nullptr));
        btnAddMusic->setText(QCoreApplication::translate("FormAddTrack", "Save", nullptr));
        statusInsert->setText(QString());
        btnCancel->setText(QCoreApplication::translate("FormAddTrack", "Cancel", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("FormAddTrack", "ADDTrack", nullptr));
        label->setText(QCoreApplication::translate("FormAddTrack", "Name:", nullptr));
        musicName->setText(QCoreApplication::translate("FormAddTrack", "asd", nullptr));
        errorMusicName->setText(QString());
        errorMusicUrl->setText(QString());
        musicUrl->setText(QString());
        btnMusicUrl->setText(QCoreApplication::translate("FormAddTrack", "add", nullptr));
        label_6->setText(QCoreApplication::translate("FormAddTrack", "Mucsic:", nullptr));
        musicImg->setText(QString());
        errorMusicImg->setText(QString());
        label_2->setText(QCoreApplication::translate("FormAddTrack", "Image:", nullptr));
        btnImgUrl->setText(QCoreApplication::translate("FormAddTrack", "add", nullptr));
        label_3->setText(QCoreApplication::translate("FormAddTrack", "Category:", nullptr));
        label_4->setText(QCoreApplication::translate("FormAddTrack", "release year", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormAddTrack: public Ui_FormAddTrack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADDTRACK_H
