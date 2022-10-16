#ifndef FORMLOGIN_H
#define FORMLOGIN_H
#include "userdao.h"
#include"utildao.h"
#include"qstring.h"
#include <QWidget>
#include"session.h"
#include "auth.h"
#include "qevent.h"
#include "ui_formlogin.h"
#include "userrole.h"
#include"QPropertyAnimation"
#include "mainwindow.h"
#include "formregister.h"
#include<iostream>


namespace Ui {
class FormLogin;
}

class FormLogin : public QWidget
{
    Q_OBJECT

public:
    explicit FormLogin(QWidget *parent = nullptr);
    ~FormLogin();

private slots:
    void on_btnLogin_clicked();

    void on_inputUserName_textChanged(const QString &arg1);

    void on_inputPassword_textChanged(const QString &arg1);


    void on_hidePasswordbt_clicked();

    void on_btnRegister_clicked();

private:
    Ui::FormLogin *ui;
    QPropertyAnimation *animation;
    bool hidePassword;
    MainWindow *mainWindowLogin;
    FormRegister *formRegister;

protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // FORMLOGIN_H
