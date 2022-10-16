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
    QLabel *bgContainer;
    QLabel *bgContent;
    QLabel *label_9;
    QLabel *label;
    QLineEdit *musicName;
    QLabel *errorMusicName;
    QLabel *errorMusicUrl;
    QPushButton *btnMusicUrl;
    QLabel *label_6;
    QLabel *errorMusicImg;
    QLabel *label_2;
    QPushButton *btnImgUrl;
    QLabel *label_3;
    QComboBox *category;
    QLabel *label_4;
    QSpinBox *releaseYear;
    QLabel *musicUrl;
    QLabel *musicImg;

    void setupUi(QWidget *FormAddTrack)
    {
        if (FormAddTrack->objectName().isEmpty())
            FormAddTrack->setObjectName(QString::fromUtf8("FormAddTrack"));
        FormAddTrack->resize(980, 698);
        ratting = new QSpinBox(FormAddTrack);
        ratting->setObjectName(QString::fromUtf8("ratting"));
        ratting->setGeometry(QRect(400, 470, 321, 31));
        ratting->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"border: 1px solid black;\n"
"border-color: rgb(165, 165, 165);\n"
"}\n"
""));
        label_5 = new QLabel(FormAddTrack);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 470, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"border: 1px solid black;\n"
"border-color: rgb(165, 165, 165);\n"
"}"));
        btnAddMusic = new QPushButton(FormAddTrack);
        btnAddMusic->setObjectName(QString::fromUtf8("btnAddMusic"));
        btnAddMusic->setGeometry(QRect(630, 590, 101, 61));
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
        statusInsert->setGeometry(QRect(383, 40, 271, 20));
        statusInsert->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        btnCancel = new QPushButton(FormAddTrack);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(230, 590, 101, 61));
        btnCancel->setCursor(QCursor(Qt::OpenHandCursor));
        btnCancel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"}"));
        bgContainer = new QLabel(FormAddTrack);
        bgContainer->setObjectName(QString::fromUtf8("bgContainer"));
        bgContainer->setGeometry(QRect(-20, 0, 1001, 721));
        bgContainer->setPixmap(QPixmap(QString::fromUtf8("../../Image/sky_blue_partly_cloudy_sky_blue_azur_azure_bright_blue_light-1239095.jpg")));
        bgContent = new QLabel(FormAddTrack);
        bgContent->setObjectName(QString::fromUtf8("bgContent"));
        bgContent->setGeometry(QRect(220, 30, 521, 631));
        bgContent->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label_9 = new QLabel(FormAddTrack);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(380, 80, 241, 51));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 24pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"}"));
        label = new QLabel(FormAddTrack);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 140, 461, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"\n"
"}"));
        musicName = new QLineEdit(FormAddTrack);
        musicName->setObjectName(QString::fromUtf8("musicName"));
        musicName->setGeometry(QRect(260, 170, 461, 31));
        musicName->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"	border: 1px solid black;\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border-color: rgb(165, 165, 165);\n"
"	color:rgb(10,100,180);\n"
"}"));
        errorMusicName = new QLabel(FormAddTrack);
        errorMusicName->setObjectName(QString::fromUtf8("errorMusicName"));
        errorMusicName->setGeometry(QRect(260, 200, 461, 20));
        errorMusicName->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 6pt \"Segoergb(255, 21, 72) UI\";\n"
"	\n"
"	color: rgb(191, 0, 0);\n"
"	\n"
"	padding: 0 8px;\n"
"}"));
        errorMusicUrl = new QLabel(FormAddTrack);
        errorMusicUrl->setObjectName(QString::fromUtf8("errorMusicUrl"));
        errorMusicUrl->setGeometry(QRect(260, 280, 461, 16));
        errorMusicUrl->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 6pt \"Segoergb(255, 21, 72) UI\";\n"
"	\n"
"	color: rgb(191, 0, 0);\n"
"	\n"
"	padding: 0 8px;\n"
"}"));
        btnMusicUrl = new QPushButton(FormAddTrack);
        btnMusicUrl->setObjectName(QString::fromUtf8("btnMusicUrl"));
        btnMusicUrl->setGeometry(QRect(655, 255, 61, 21));
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
        label_6->setGeometry(QRect(260, 220, 461, 31));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"\n"
"}"));
        errorMusicImg = new QLabel(FormAddTrack);
        errorMusicImg->setObjectName(QString::fromUtf8("errorMusicImg"));
        errorMusicImg->setGeometry(QRect(260, 370, 461, 16));
        errorMusicImg->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 6pt \"Segoergb(255, 21, 72) UI\";\n"
"	\n"
"	color: rgb(191, 0, 0);\n"
"	\n"
"	padding: 0 8px;\n"
"}"));
        label_2 = new QLabel(FormAddTrack);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 310, 461, 31));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"\n"
"}"));
        btnImgUrl = new QPushButton(FormAddTrack);
        btnImgUrl->setObjectName(QString::fromUtf8("btnImgUrl"));
        btnImgUrl->setGeometry(QRect(655, 345, 61, 21));
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
        label_3->setGeometry(QRect(260, 410, 141, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"border: 1px solid black;\n"
"border-color: rgb(165, 165, 165);\n"
"}"));
        category = new QComboBox(FormAddTrack);
        category->setObjectName(QString::fromUtf8("category"));
        category->setGeometry(QRect(400, 410, 321, 31));
        category->setCursor(QCursor(Qt::OpenHandCursor));
        category->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"\n"
"\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	color:rgb(10,100,180);\n"
"border: 1px solid black;\n"
"border-color: rgb(165, 165, 165);\n"
"}"));
        label_4 = new QLabel(FormAddTrack);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 530, 141, 31));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 10pt \"Showcard Gothic\";\n"
"	padding: 0 8px;\n"
"\n"
"	color:rgb(10,100,180);\n"
"border: 1px solid black;\n"
"border-color: rgb(165, 165, 165);\n"
"}"));
        releaseYear = new QSpinBox(FormAddTrack);
        releaseYear->setObjectName(QString::fromUtf8("releaseYear"));
        releaseYear->setGeometry(QRect(400, 530, 321, 31));
        releaseYear->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border:10px;\n"
"	color:rgb(10,100,180);\n"
"border: 1px solid black;\n"
"border-color: rgb(165, 165, 165);\n"
"}\n"
""));
        musicUrl = new QLabel(FormAddTrack);
        musicUrl->setObjectName(QString::fromUtf8("musicUrl"));
        musicUrl->setGeometry(QRect(260, 250, 461, 31));
        musicUrl->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"	border: 1px solid black;\n"
"	padding: 0 8px;\n"
"	background:;\n"
"	border-color: rgb(165, 165, 165);\n"
"	color:rgb(10,100,180);\n"
"}"));
        musicImg = new QLabel(FormAddTrack);
        musicImg->setObjectName(QString::fromUtf8("musicImg"));
        musicImg->setGeometry(QRect(260, 340, 461, 31));
        musicImg->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"	border: 1px solid black;\n"
"	padding: 0 8px;\n"
"	background:white;\n"
"	border-color: rgb(165, 165, 165);\n"
"	color:rgb(10,100,180);\n"
"}"));
        bgContainer->raise();
        bgContent->raise();
        label->raise();
        musicName->raise();
        label_6->raise();
        label_2->raise();
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
        errorMusicUrl->raise();
        errorMusicName->raise();
        musicUrl->raise();
        btnMusicUrl->raise();
        musicImg->raise();
        btnImgUrl->raise();

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
        bgContainer->setText(QString());
        bgContent->setText(QString());
        label_9->setText(QCoreApplication::translate("FormAddTrack", "ADDTrack", nullptr));
        label->setText(QCoreApplication::translate("FormAddTrack", "Name", nullptr));
        musicName->setText(QString());
        errorMusicName->setText(QString());
        errorMusicUrl->setText(QString());
        btnMusicUrl->setText(QString());
        label_6->setText(QCoreApplication::translate("FormAddTrack", "Mucsic", nullptr));
        errorMusicImg->setText(QString());
        label_2->setText(QCoreApplication::translate("FormAddTrack", "Image", nullptr));
        btnImgUrl->setText(QString());
        label_3->setText(QCoreApplication::translate("FormAddTrack", "Category:", nullptr));
        label_4->setText(QCoreApplication::translate("FormAddTrack", "release year", nullptr));
        musicUrl->setText(QString());
        musicImg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FormAddTrack: public Ui_FormAddTrack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADDTRACK_H
