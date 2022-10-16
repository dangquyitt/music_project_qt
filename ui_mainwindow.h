/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *seekBar;
    QPushButton *back;
    QPushButton *play;
    QPushButton *forward;
    QLabel *currentSong;
    QListWidget *listWidget;
    QPushButton *repeat;
    QPushButton *shuffle;
    QSlider *volumeBar;
    QPushButton *mute;
    QLabel *imgMusic;
    QPushButton *btnLogout;
    QPushButton *pushButton;
    QLabel *userOnl;
    QPushButton *btnListUser;
    QPushButton *btnProfile;
    QPushButton *addMusic;
    QPushButton *deleteMusic;
    QPushButton *editMusic;
    QLabel *rcs;
    QLabel *label;
    QLabel *rcs2;
    QComboBox *selectCategory;
    QLineEdit *searchBar;
    QPushButton *btnReload;
    QLabel *userInfo;
    QLabel *label_3;
    QLabel *roleInfo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1447, 560);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        seekBar = new QSlider(centralWidget);
        seekBar->setObjectName(QString::fromUtf8("seekBar"));
        seekBar->setGeometry(QRect(20, 460, 971, 20));
        seekBar->setMouseTracking(true);
        seekBar->setFocusPolicy(Qt::NoFocus);
        seekBar->setAcceptDrops(false);
        seekBar->setMaximum(1000);
        seekBar->setOrientation(Qt::Horizontal);
        back = new QPushButton(centralWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(429, 490, 41, 31));
        back->setCursor(QCursor(Qt::OpenHandCursor));
        back->setFocusPolicy(Qt::NoFocus);
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        play = new QPushButton(centralWidget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(503, 490, 41, 31));
        play->setCursor(QCursor(Qt::OpenHandCursor));
        play->setFocusPolicy(Qt::NoFocus);
        play->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        play->setCheckable(true);
        play->setChecked(true);
        forward = new QPushButton(centralWidget);
        forward->setObjectName(QString::fromUtf8("forward"));
        forward->setGeometry(QRect(572, 490, 41, 31));
        forward->setCursor(QCursor(Qt::OpenHandCursor));
        forward->setFocusPolicy(Qt::NoFocus);
        forward->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        currentSong = new QLabel(centralWidget);
        currentSong->setObjectName(QString::fromUtf8("currentSong"));
        currentSong->setGeometry(QRect(84, 11, 881, 31));
        currentSong->setStyleSheet(QString::fromUtf8("font: 600 12pt \"Segoe UI Variable Text Semibold\";"));
        currentSong->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(1010, 50, 401, 421));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setContextMenuPolicy(Qt::NoContextMenu);
        listWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setMovement(QListView::Static);
        listWidget->setViewMode(QListView::ListMode);
        repeat = new QPushButton(centralWidget);
        repeat->setObjectName(QString::fromUtf8("repeat"));
        repeat->setGeometry(QRect(658, 490, 41, 30));
        repeat->setCursor(QCursor(Qt::OpenHandCursor));
        repeat->setFocusPolicy(Qt::NoFocus);
        repeat->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        repeat->setCheckable(true);
        shuffle = new QPushButton(centralWidget);
        shuffle->setObjectName(QString::fromUtf8("shuffle"));
        shuffle->setGeometry(QRect(340, 490, 41, 31));
        shuffle->setCursor(QCursor(Qt::OpenHandCursor));
        shuffle->setFocusPolicy(Qt::NoFocus);
        shuffle->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        shuffle->setCheckable(true);
        volumeBar = new QSlider(centralWidget);
        volumeBar->setObjectName(QString::fromUtf8("volumeBar"));
        volumeBar->setGeometry(QRect(109, 496, 191, 20));
        volumeBar->setFocusPolicy(Qt::NoFocus);
        volumeBar->setStyleSheet(QString::fromUtf8("QSlider{\n"
"	color:white;\n"
"\n"
"}"));
        volumeBar->setMaximum(100);
        volumeBar->setValue(100);
        volumeBar->setOrientation(Qt::Horizontal);
        volumeBar->setInvertedAppearance(false);
        volumeBar->setInvertedControls(false);
        mute = new QPushButton(centralWidget);
        mute->setObjectName(QString::fromUtf8("mute"));
        mute->setGeometry(QRect(30, 490, 41, 31));
        mute->setCursor(QCursor(Qt::OpenHandCursor));
        mute->setFocusPolicy(Qt::NoFocus);
        mute->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        mute->setCheckable(true);
        mute->setChecked(false);
        mute->setAutoRepeat(false);
        mute->setFlat(false);
        imgMusic = new QLabel(centralWidget);
        imgMusic->setObjectName(QString::fromUtf8("imgMusic"));
        imgMusic->setGeometry(QRect(50, 40, 871, 391));
        btnLogout = new QPushButton(centralWidget);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(960, 400, 41, 29));
        btnLogout->setCursor(QCursor(Qt::OpenHandCursor));
        btnLogout->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(960, 200, 41, 31));
        pushButton->setCursor(QCursor(Qt::OpenHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        userOnl = new QLabel(centralWidget);
        userOnl->setObjectName(QString::fromUtf8("userOnl"));
        userOnl->setGeometry(QRect(1010, 480, 130, 17));
        userOnl->setStyleSheet(QString::fromUtf8("font: 600 italic 12pt \"Sitka Display Semibold\";\n"
"color:black;"));
        btnListUser = new QPushButton(centralWidget);
        btnListUser->setObjectName(QString::fromUtf8("btnListUser"));
        btnListUser->setGeometry(QRect(960, 350, 41, 31));
        btnListUser->setCursor(QCursor(Qt::OpenHandCursor));
        btnListUser->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        btnProfile = new QPushButton(centralWidget);
        btnProfile->setObjectName(QString::fromUtf8("btnProfile"));
        btnProfile->setGeometry(QRect(960, 300, 41, 31));
        btnProfile->setCursor(QCursor(Qt::OpenHandCursor));
        btnProfile->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        addMusic = new QPushButton(centralWidget);
        addMusic->setObjectName(QString::fromUtf8("addMusic"));
        addMusic->setGeometry(QRect(960, 100, 41, 31));
        addMusic->setCursor(QCursor(Qt::OpenHandCursor));
        addMusic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        deleteMusic = new QPushButton(centralWidget);
        deleteMusic->setObjectName(QString::fromUtf8("deleteMusic"));
        deleteMusic->setGeometry(QRect(960, 150, 41, 31));
        deleteMusic->setCursor(QCursor(Qt::OpenHandCursor));
        deleteMusic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        editMusic = new QPushButton(centralWidget);
        editMusic->setObjectName(QString::fromUtf8("editMusic"));
        editMusic->setGeometry(QRect(960, 250, 41, 31));
        editMusic->setCursor(QCursor(Qt::OpenHandCursor));
        editMusic->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        rcs = new QLabel(centralWidget);
        rcs->setObjectName(QString::fromUtf8("rcs"));
        rcs->setGeometry(QRect(0, 450, 2391, 201));
        rcs->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 530, 63, 20));
        rcs2 = new QLabel(centralWidget);
        rcs2->setObjectName(QString::fromUtf8("rcs2"));
        rcs2->setGeometry(QRect(1010, 0, 441, 451));
        rcs2->setPixmap(QPixmap(QString::fromUtf8("../../Image/Hinh-Nen-Trang-10.webp")));
        selectCategory = new QComboBox(centralWidget);
        selectCategory->setObjectName(QString::fromUtf8("selectCategory"));
        selectCategory->setGeometry(QRect(1020, 10, 131, 31));
        selectCategory->setCursor(QCursor(Qt::OpenHandCursor));
        selectCategory->setStyleSheet(QString::fromUtf8("font: 600 italic 10pt \"Sitka Display Semibold\";"));
        searchBar = new QLineEdit(centralWidget);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));
        searchBar->setGeometry(QRect(1170, 10, 191, 31));
        searchBar->setCursor(QCursor(Qt::ArrowCursor));
        searchBar->setMouseTracking(false);
        searchBar->setCursorPosition(0);
        searchBar->setReadOnly(false);
        btnReload = new QPushButton(centralWidget);
        btnReload->setObjectName(QString::fromUtf8("btnReload"));
        btnReload->setGeometry(QRect(1372, 20, 24, 21));
        btnReload->setCursor(QCursor(Qt::OpenHandCursor));
        btnReload->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:10px;\n"
"	background:white;\n"
"}"));
        userInfo = new QLabel(centralWidget);
        userInfo->setObjectName(QString::fromUtf8("userInfo"));
        userInfo->setGeometry(QRect(1149, 480, 261, 20));
        userInfo->setStyleSheet(QString::fromUtf8("font: 600 italic 12pt \"Sitka Display Semibold\";\n"
"color:black;"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1010, 502, 130, 17));
        label_3->setStyleSheet(QString::fromUtf8("font: 600 italic 12pt \"Sitka Display Semibold\";\n"
"color:black;\n"
""));
        roleInfo = new QLabel(centralWidget);
        roleInfo->setObjectName(QString::fromUtf8("roleInfo"));
        roleInfo->setGeometry(QRect(1148, 502, 260, 17));
        roleInfo->setStyleSheet(QString::fromUtf8("font: 600 italic 12pt \"Sitka Display Semibold\";\n"
"color:black;"));
        MainWindow->setCentralWidget(centralWidget);
        rcs2->raise();
        imgMusic->raise();
        rcs->raise();
        btnListUser->raise();
        btnProfile->raise();
        addMusic->raise();
        deleteMusic->raise();
        editMusic->raise();
        seekBar->raise();
        back->raise();
        play->raise();
        forward->raise();
        currentSong->raise();
        listWidget->raise();
        repeat->raise();
        shuffle->raise();
        volumeBar->raise();
        mute->raise();
        btnLogout->raise();
        pushButton->raise();
        userOnl->raise();
        label->raise();
        selectCategory->raise();
        searchBar->raise();
        btnReload->raise();
        userInfo->raise();
        label_3->raise();
        roleInfo->raise();

        retranslateUi(MainWindow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Music Player", nullptr));
        back->setText(QString());
        play->setText(QString());
        forward->setText(QString());
        currentSong->setText(QCoreApplication::translate("MainWindow", "Song", nullptr));
        repeat->setText(QString());
        shuffle->setText(QString());
        mute->setText(QString());
        imgMusic->setText(QString());
        btnLogout->setText(QString());
        pushButton->setText(QString());
        userOnl->setText(QCoreApplication::translate("MainWindow", "User:", nullptr));
        btnListUser->setText(QString());
        btnProfile->setText(QString());
        addMusic->setText(QString());
        deleteMusic->setText(QString());
        editMusic->setText(QString());
        rcs->setText(QString());
        label->setText(QString());
        rcs2->setText(QString());
        btnReload->setText(QString());
        userInfo->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Role:", nullptr));
        roleInfo->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
