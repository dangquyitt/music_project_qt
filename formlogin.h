#ifndef FORMLOGIN_H
#define FORMLOGIN_H

#include "mainwindow.h"
#include "userdao.h"
#include"utildao.h"
#include"qstring.h"
#include <QWidget>
#include"session.h"

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

private:
    Ui::FormLogin *ui;

protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // FORMLOGIN_H
