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
#include <QtWidgets/QGridLayout>
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
    QLineEdit *searchBar;
    QLabel *imgMusic;
    QPushButton *btnLogout;
    QComboBox *selectCategory;
    QPushButton *btnFavorites;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *addMusic;
    QPushButton *deleteMusic;
    QPushButton *editMusic;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1427, 756);
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
        seekBar->setGeometry(QRect(20, 480, 971, 20));
        seekBar->setMouseTracking(true);
        seekBar->setFocusPolicy(Qt::NoFocus);
        seekBar->setAcceptDrops(false);
        seekBar->setMaximum(1000);
        seekBar->setOrientation(Qt::Horizontal);
        back = new QPushButton(centralWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(430, 510, 41, 31));
        back->setFocusPolicy(Qt::NoFocus);
        play = new QPushButton(centralWidget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(490, 510, 41, 31));
        play->setFocusPolicy(Qt::NoFocus);
        play->setCheckable(true);
        play->setChecked(true);
        forward = new QPushButton(centralWidget);
        forward->setObjectName(QString::fromUtf8("forward"));
        forward->setGeometry(QRect(560, 510, 41, 31));
        forward->setFocusPolicy(Qt::NoFocus);
        currentSong = new QLabel(centralWidget);
        currentSong->setObjectName(QString::fromUtf8("currentSong"));
        currentSong->setGeometry(QRect(30, 10, 971, 21));
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
        repeat->setGeometry(QRect(710, 510, 41, 21));
        repeat->setFocusPolicy(Qt::NoFocus);
        repeat->setCheckable(true);
        shuffle = new QPushButton(centralWidget);
        shuffle->setObjectName(QString::fromUtf8("shuffle"));
        shuffle->setGeometry(QRect(360, 510, 41, 21));
        shuffle->setFocusPolicy(Qt::NoFocus);
        shuffle->setCheckable(true);
        volumeBar = new QSlider(centralWidget);
        volumeBar->setObjectName(QString::fromUtf8("volumeBar"));
        volumeBar->setGeometry(QRect(160, 510, 181, 16));
        volumeBar->setFocusPolicy(Qt::NoFocus);
        volumeBar->setMaximum(100);
        volumeBar->setValue(100);
        volumeBar->setOrientation(Qt::Horizontal);
        volumeBar->setInvertedAppearance(false);
        volumeBar->setInvertedControls(false);
        mute = new QPushButton(centralWidget);
        mute->setObjectName(QString::fromUtf8("mute"));
        mute->setGeometry(QRect(110, 510, 41, 21));
        mute->setFocusPolicy(Qt::NoFocus);
        mute->setCheckable(true);
        mute->setChecked(false);
        mute->setAutoRepeat(false);
        mute->setFlat(false);
        searchBar = new QLineEdit(centralWidget);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));
        searchBar->setGeometry(QRect(1097, 10, 261, 28));
        searchBar->setCursor(QCursor(Qt::ArrowCursor));
        searchBar->setMouseTracking(false);
        searchBar->setCursorPosition(0);
        searchBar->setReadOnly(false);
        imgMusic = new QLabel(centralWidget);
        imgMusic->setObjectName(QString::fromUtf8("imgMusic"));
        imgMusic->setGeometry(QRect(30, 50, 961, 421));
        btnLogout = new QPushButton(centralWidget);
        btnLogout->setObjectName(QString::fromUtf8("btnLogout"));
        btnLogout->setGeometry(QRect(1330, 700, 83, 29));
        selectCategory = new QComboBox(centralWidget);
        selectCategory->setObjectName(QString::fromUtf8("selectCategory"));
        selectCategory->setGeometry(QRect(1010, 10, 81, 28));
        btnFavorites = new QPushButton(centralWidget);
        btnFavorites->setObjectName(QString::fromUtf8("btnFavorites"));
        btnFavorites->setGeometry(QRect(1360, 10, 51, 29));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1010, 480, 401, 41));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        addMusic = new QPushButton(widget);
        addMusic->setObjectName(QString::fromUtf8("addMusic"));

        gridLayout->addWidget(addMusic, 0, 0, 1, 1);

        deleteMusic = new QPushButton(widget);
        deleteMusic->setObjectName(QString::fromUtf8("deleteMusic"));

        gridLayout->addWidget(deleteMusic, 0, 2, 1, 1);

        editMusic = new QPushButton(widget);
        editMusic->setObjectName(QString::fromUtf8("editMusic"));

        gridLayout->addWidget(editMusic, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Music Player", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        forward->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        currentSong->setText(QCoreApplication::translate("MainWindow", "Song", nullptr));
        repeat->setText(QCoreApplication::translate("MainWindow", "r", nullptr));
        shuffle->setText(QCoreApplication::translate("MainWindow", "s", nullptr));
        mute->setText(QCoreApplication::translate("MainWindow", "m", nullptr));
        imgMusic->setText(QString());
        btnLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        btnFavorites->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        addMusic->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        deleteMusic->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        editMusic->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
