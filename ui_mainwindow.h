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
    QPushButton *add;
    QPushButton *remove;
    QPushButton *save;
    QLabel *currentSong;
    QListWidget *listWidget;
    QPushButton *repeat;
    QPushButton *shuffle;
    QSlider *volumeBar;
    QPushButton *mute;
    QLineEdit *searchBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1124, 756);
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
        seekBar->setGeometry(QRect(8, 475, 921, 20));
        seekBar->setMouseTracking(true);
        seekBar->setFocusPolicy(Qt::NoFocus);
        seekBar->setAcceptDrops(false);
        seekBar->setMaximum(1000);
        seekBar->setOrientation(Qt::Horizontal);
        back = new QPushButton(centralWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(398, 495, 41, 31));
        back->setFocusPolicy(Qt::NoFocus);
        play = new QPushButton(centralWidget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(448, 495, 41, 31));
        play->setFocusPolicy(Qt::NoFocus);
        play->setCheckable(true);
        play->setChecked(true);
        forward = new QPushButton(centralWidget);
        forward->setObjectName(QString::fromUtf8("forward"));
        forward->setGeometry(QRect(497, 495, 41, 31));
        forward->setFocusPolicy(Qt::NoFocus);
        add = new QPushButton(centralWidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(840, 500, 41, 21));
        add->setFocusPolicy(Qt::NoFocus);
        remove = new QPushButton(centralWidget);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(770, 500, 41, 21));
        remove->setFocusPolicy(Qt::NoFocus);
        save = new QPushButton(centralWidget);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(700, 500, 41, 21));
        save->setFocusPolicy(Qt::NoFocus);
        save->setCheckable(true);
        save->setChecked(true);
        save->setFlat(false);
        currentSong = new QLabel(centralWidget);
        currentSong->setObjectName(QString::fromUtf8("currentSong"));
        currentSong->setGeometry(QRect(148, 460, 641, 20));
        currentSong->setAlignment(Qt::AlignCenter);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(8, 50, 921, 401));
        listWidget->setFocusPolicy(Qt::NoFocus);
        listWidget->setContextMenuPolicy(Qt::NoContextMenu);
        listWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        listWidget->setProperty("showDropIndicator", QVariant(false));
        listWidget->setMovement(QListView::Static);
        listWidget->setViewMode(QListView::ListMode);
        repeat = new QPushButton(centralWidget);
        repeat->setObjectName(QString::fromUtf8("repeat"));
        repeat->setGeometry(QRect(570, 500, 41, 21));
        repeat->setFocusPolicy(Qt::NoFocus);
        repeat->setCheckable(true);
        shuffle = new QPushButton(centralWidget);
        shuffle->setObjectName(QString::fromUtf8("shuffle"));
        shuffle->setGeometry(QRect(325, 500, 41, 21));
        shuffle->setFocusPolicy(Qt::NoFocus);
        shuffle->setCheckable(true);
        volumeBar = new QSlider(centralWidget);
        volumeBar->setObjectName(QString::fromUtf8("volumeBar"));
        volumeBar->setGeometry(QRect(110, 503, 181, 16));
        volumeBar->setFocusPolicy(Qt::NoFocus);
        volumeBar->setMaximum(100);
        volumeBar->setValue(100);
        volumeBar->setOrientation(Qt::Horizontal);
        volumeBar->setInvertedAppearance(false);
        volumeBar->setInvertedControls(false);
        mute = new QPushButton(centralWidget);
        mute->setObjectName(QString::fromUtf8("mute"));
        mute->setGeometry(QRect(50, 500, 41, 21));
        mute->setFocusPolicy(Qt::NoFocus);
        mute->setCheckable(true);
        mute->setChecked(false);
        mute->setAutoRepeat(false);
        mute->setFlat(false);
        searchBar = new QLineEdit(centralWidget);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));
        searchBar->setGeometry(QRect(8, 10, 921, 28));
        searchBar->setCursor(QCursor(Qt::ArrowCursor));
        searchBar->setMouseTracking(false);
        searchBar->setCursorPosition(0);
        searchBar->setReadOnly(false);
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
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        remove->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        save->setText(QCoreApplication::translate("MainWindow", "save", nullptr));
        currentSong->setText(QCoreApplication::translate("MainWindow", "Song", nullptr));
        repeat->setText(QCoreApplication::translate("MainWindow", "r", nullptr));
        shuffle->setText(QCoreApplication::translate("MainWindow", "s", nullptr));
        mute->setText(QCoreApplication::translate("MainWindow", "m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
