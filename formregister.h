#ifndef FORMREGISTER_H
#define FORMREGISTER_H

#include <QWidget>
#include <string>

using namespace std;

namespace Ui {
class FormRegister;
}

class FormRegister : public QWidget
{
    Q_OBJECT

public:
    explicit FormRegister(QWidget *parent = nullptr);
    ~FormRegister();

private slots:
    void on_btnRegister_clicked();

    void on_userName_textChanged(const QString &arg1);

    void on_password_textChanged(const QString &arg1);

    void on_passwordCheck_textChanged(const QString &arg1);

    void on_name_textChanged(const QString &arg1);

    void on_email_textChanged(const QString &arg1);

private:
    Ui::FormRegister *ui;

    bool validatorEmail(string email);

    bool validatorUserName(string userName);

    bool validatorPassword(string password);

};

#endif // FORMREGISTER_H
