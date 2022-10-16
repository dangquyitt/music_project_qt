QT       += core gui
QT       += multimedia
QT       += sql
CONFIG   += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtMusicPlayer
TEMPLATE = app


SOURCES += main.cpp\
    auth.cpp \
    authdao.cpp \
    basedao.cpp \
    category.cpp \
    categorydao.cpp \
    formaddcategory.cpp \
    formaddtrack.cpp \
    formlistuser.cpp \
    formlogin.cpp \
    formprofile.cpp \
    formregister.cpp \
    getconnectiondb.cpp \
        mainwindow.cpp \
    menu.cpp \
    menudao.cpp \
    music.cpp \
    musicdao.cpp \
    playlist.cpp \
    role.cpp \
    roledao.cpp \
    session.cpp \
    user.cpp \
    userdao.cpp \
    userrole.cpp \
    userroledao.cpp \
    utildao.cpp

HEADERS  += mainwindow.h \
    auth.h \
    authdao.h \
    basedao.h \
    category.h \
    categorydao.h \
    formaddcategory.h \
    formaddtrack.h \
    formlistuser.h \
    formlogin.h \
    formprofile.h \
    formregister.h \
    getconnectiondb.h \
    menu.h \
    menudao.h \
    music.h \
    musicdao.h \
    playlist.h \
    role.h \
    roledao.h \
    session.h \
    user.h \
    userdao.h \
    userrole.h \
    userroledao.h \
    utildao.h

FORMS    += mainwindow.ui \
    formaddcategory.ui \
    formaddtrack.ui \
    formlistuser.ui \
    formlogin.ui \
    formprofile.ui \
    formregister.ui

RESOURCES += \
    resources.qrc
