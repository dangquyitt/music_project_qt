#ifndef FORMCHANGEPASSWORD_H
#define FORMCHANGEPASSWORD_H

#include <QWidget>
#include "utildao.h"
#include "session.h"
#include <regex>
#include<string>
#include "qmessagebox.h"

using namespace std;
namespace Ui {
class FormChangePassword;
}

class FormChangePassword : public QWidget
{
    Q_OBJECT

public:
    explicit FormChangePassword(QWidget *parent = nullptr);
    ~FormChangePassword();

private slots:
    void on_btnSave_clicked();

    void on_newPassword_textChanged(const QString &arg1);

    void on_oldPassword_textChanged(const QString &arg1);


    void on_confirmPassword_textChanged(const QString &arg1);

    void on_btnHidenNewPassword_clicked();

    void on_btnHidenOldPassword_clicked();

    void on_btnCancel_clicked();

private:
    bool validatorPassword(string password);
    Ui::FormChangePassword *ui;

    bool hidenNewPasswod = true;
    bool hidenOldPassword = true;
protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // FORMCHANGEPASSWORD_H
