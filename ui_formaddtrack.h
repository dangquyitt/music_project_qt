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
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormAddTrack
{
public:
    QSpinBox *ratting;
    QLabel *label_5;
    QPushButton *btnAddMusic;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *errorMusicName;
    QLineEdit *musicName;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QLabel *label_6;
    QPushButton *btnMusicUrl;
    QLabel *musicUrl;
    QLabel *errorMusicUrl;
    QSplitter *splitter_4;
    QSplitter *splitter_3;
    QLabel *label_2;
    QPushButton *btnImgUrl;
    QLabel *musicImg;
    QLabel *errorMusicImg;
    QSplitter *splitter_5;
    QLabel *label_3;
    QComboBox *category;
    QSplitter *splitter_6;
    QLabel *label_4;
    QDateEdit *releaseYear;

    void setupUi(QWidget *FormAddTrack)
    {
        if (FormAddTrack->objectName().isEmpty())
            FormAddTrack->setObjectName(QString::fromUtf8("FormAddTrack"));
        FormAddTrack->resize(515, 592);
        ratting = new QSpinBox(FormAddTrack);
        ratting->setObjectName(QString::fromUtf8("ratting"));
        ratting->setGeometry(QRect(180, 470, 48, 29));
        label_5 = new QLabel(FormAddTrack);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 470, 60, 20));
        btnAddMusic = new QPushButton(FormAddTrack);
        btnAddMusic->setObjectName(QString::fromUtf8("btnAddMusic"));
        btnAddMusic->setGeometry(QRect(170, 520, 80, 29));
        widget = new QWidget(FormAddTrack);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(140, 40, 207, 84));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        errorMusicName = new QLabel(widget);
        errorMusicName->setObjectName(QString::fromUtf8("errorMusicName"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, errorMusicName);

        musicName = new QLineEdit(widget);
        musicName->setObjectName(QString::fromUtf8("musicName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, musicName);

        splitter_2 = new QSplitter(FormAddTrack);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(140, 130, 218, 69));
        splitter_2->setOrientation(Qt::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        splitter->addWidget(label_6);
        btnMusicUrl = new QPushButton(splitter);
        btnMusicUrl->setObjectName(QString::fromUtf8("btnMusicUrl"));
        splitter->addWidget(btnMusicUrl);
        splitter_2->addWidget(splitter);
        musicUrl = new QLabel(splitter_2);
        musicUrl->setObjectName(QString::fromUtf8("musicUrl"));
        splitter_2->addWidget(musicUrl);
        errorMusicUrl = new QLabel(splitter_2);
        errorMusicUrl->setObjectName(QString::fromUtf8("errorMusicUrl"));
        splitter_2->addWidget(errorMusicUrl);
        splitter_4 = new QSplitter(FormAddTrack);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setGeometry(QRect(130, 230, 221, 69));
        splitter_4->setOrientation(Qt::Vertical);
        splitter_3 = new QSplitter(splitter_4);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        splitter_3->addWidget(label_2);
        btnImgUrl = new QPushButton(splitter_3);
        btnImgUrl->setObjectName(QString::fromUtf8("btnImgUrl"));
        splitter_3->addWidget(btnImgUrl);
        splitter_4->addWidget(splitter_3);
        musicImg = new QLabel(splitter_4);
        musicImg->setObjectName(QString::fromUtf8("musicImg"));
        splitter_4->addWidget(musicImg);
        errorMusicImg = new QLabel(splitter_4);
        errorMusicImg->setObjectName(QString::fromUtf8("errorMusicImg"));
        splitter_4->addWidget(errorMusicImg);
        splitter_5 = new QSplitter(FormAddTrack);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setGeometry(QRect(120, 340, 221, 28));
        splitter_5->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter_5->addWidget(label_3);
        category = new QComboBox(splitter_5);
        category->setObjectName(QString::fromUtf8("category"));
        splitter_5->addWidget(category);
        splitter_6 = new QSplitter(FormAddTrack);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setGeometry(QRect(110, 380, 227, 28));
        splitter_6->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        splitter_6->addWidget(label_4);
        releaseYear = new QDateEdit(splitter_6);
        releaseYear->setObjectName(QString::fromUtf8("releaseYear"));
        splitter_6->addWidget(releaseYear);

        retranslateUi(FormAddTrack);

        QMetaObject::connectSlotsByName(FormAddTrack);
    } // setupUi

    void retranslateUi(QWidget *FormAddTrack)
    {
        FormAddTrack->setWindowTitle(QCoreApplication::translate("FormAddTrack", "Form", nullptr));
        label_5->setText(QCoreApplication::translate("FormAddTrack", "\304\220\303\241nh gi\303\241", nullptr));
        btnAddMusic->setText(QCoreApplication::translate("FormAddTrack", "Th\303\252m", nullptr));
        label->setText(QCoreApplication::translate("FormAddTrack", "T\303\252n b\303\240i h\303\241t", nullptr));
        errorMusicName->setText(QString());
        label_6->setText(QCoreApplication::translate("FormAddTrack", "Nh\341\272\241c", nullptr));
        btnMusicUrl->setText(QCoreApplication::translate("FormAddTrack", "Th\303\252m", nullptr));
        musicUrl->setText(QString());
        errorMusicUrl->setText(QString());
        label_2->setText(QCoreApplication::translate("FormAddTrack", "\341\272\242nh", nullptr));
        btnImgUrl->setText(QCoreApplication::translate("FormAddTrack", "Th\303\252m", nullptr));
        musicImg->setText(QString());
        errorMusicImg->setText(QCoreApplication::translate("FormAddTrack", "Kh\303\264n", nullptr));
        label_3->setText(QCoreApplication::translate("FormAddTrack", "Th\341\273\203 lo\341\272\241i", nullptr));
        label_4->setText(QCoreApplication::translate("FormAddTrack", "N\304\203m ph\303\241t h\303\240nh", nullptr));
        releaseYear->setDisplayFormat(QCoreApplication::translate("FormAddTrack", "d/M/yyyy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormAddTrack: public Ui_FormAddTrack {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMADDTRACK_H
