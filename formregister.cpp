
#include "formregister.h"
#include "ui_formregister.h"
#include "user.h"
#include"utildao.h"

#include <regex>
FormRegister::FormRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormRegister)
{
    ui->setupUi(this);
}

FormRegister::~FormRegister()
{
    delete ui;
}


bool FormRegister::validatorEmail(string email) {
    string emailRegex = "([_a-z0-9-]+(\\.[_a-z0-9-]+)*@[a-z0-9-]+(\\.[a-z0-9-]+)*(\\.[a-z]{2,4}))";
    return regex_match(email, regex(emailRegex));
}

bool FormRegister::validatorPassword(string password) {
    // (?=.*?[A-Z]): It nhat mot chu cai viet hoa.
    // (?=.*?[a-z]): It nhat mot chu cai viet thuong.
    // (?=.*?[0-9]): It nhat mot so.
    // .{8,}: It nhat 8 ki tu.
    string passwordRegex = "^(?=[a-zA-Z0-9#@$?]{8,}$)(?=.*?[a-z])(?=.*?[A-Z])(?=.*?[0-9]).*";
    return regex_match(password, regex(passwordRegex));
}

bool FormRegister::validatorUserName(string userName) {
    string userNameRegex = "^[a-zA-Z0-9](_(?!(\\.|_))|\\.(?!(_|\\.))|[a-zA-Z0-9]){6,18}[a-zA-Z0-9]$";
    return regex_match(userName, regex(userNameRegex));
}

void FormRegister::on_btnRegister_clicked()
{
    bool isPassed = true;
    QString userName = ui->userName->text();
    QString email = ui->email->text();
    QString password = ui->password->text();
    QString name = ui->name->text();
    if(userName.isEmpty() || userName.isNull() || !validatorUserName(userName.toStdString())) {
        ui->errorUserName->setText("Tên đăng nhập không hợp lệ");
        isPassed=false;
    } else {
        vector<User> users = UtilDAO::getUserDAO()->findByProperties("user_name", userName.toStdString());
        if(!users.empty()) {
            ui->errorUserName->setText("Tên đăng nhập đã tồn tại");
            isPassed = false;
        }
    }

    if(password.isEmpty() || password.isNull() || !validatorPassword(password.toStdString())) {
        ui->errorPassword->setText("Mật khẩu không hợp lệ");
        isPassed = false;
    }

    if(name.isEmpty() || name.isNull()) {
        ui->errorName->setText("Họ và tên không hợp lệ");
        isPassed = false;
    }

    if(email.isEmpty() || email.isNull() || !validatorEmail(email.toStdString())) {
        ui->errorEmail->setText("Email không hợp lệ");
        isPassed= false;
    } else {
        vector<User> users = UtilDAO::getUserDAO()->findByProperties("email", email.toStdString());
        if(!users.empty()) {
            ui->errorEmail->setText("Email đã tồn tại");
            isPassed = false;
        }
    }

    if(ui->passwordCheck->text() != password) {
        ui->errorPasswordCheck->setText("Mật khẩu không trùng");
        isPassed = false;
    }

    if(isPassed) {
        User user;
        user.setUserName(userName.toStdString());
        user.setPassword(password.toStdString());
        user.setEmail(email.toStdString());
        user.setName(name.toStdString());
        if(UtilDAO::getUserDAO()->save(user)) {
            // Tao tai khoan thanh cong
        } else {
            // Tao tai khoan that bai
        }
    } else {
        // Tao tai khoan that bai
    }
}


void FormRegister::on_userName_textChanged(const QString &arg1)
{
    ui->errorUserName->setText("");
}




void FormRegister::on_password_textChanged(const QString &arg1)
{
    ui->errorPassword->setText("");
    ui->errorPasswordCheck->setText("");
}


void FormRegister::on_passwordCheck_textChanged(const QString &arg1)
{
    if(arg1 != ui->password->text()) {
        ui->errorPasswordCheck->setText("Mật khẩu không trùng");
    } else {
        ui->errorPasswordCheck->setText("");
    }
}


void FormRegister::on_name_textChanged(const QString &arg1)
{
    ui->errorName->setText("");
}

void FormRegister::on_email_textChanged(const QString &arg1)
{
    ui->errorEmail->setText("");
}

