#include "auth.h"
#include "formlogin.h"
#include "ui_formlogin.h"
#include "userrole.h"

#include<iostream>

FormLogin::FormLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormLogin)
{
    ui->setupUi(this);
    User user = UtilDAO::getUserDAO()->findById(1);
    user.setPassword("12345");
    UtilDAO::getUserDAO()->remove(5);
}

FormLogin::~FormLogin()
{
    delete ui;
}

void FormLogin::on_btnLogin_clicked()
{
    string userName = ui->inputUserName->text().trimmed().toStdString();
    string password = ui->inputPassword->text().toStdString();
    if(!userName.empty()) {
        vector<User> users = UtilDAO::getUserDAO()->findByProperties("user_name", userName);
        if (!users.empty()) {
                    if (users.at(0).getPassword()._Equal(password)) {
                        User user = users[0];
                        Session::USER_INFO = new User;
                        Session::USER_INFO->setId(user.getId());
                        Session::USER_INFO->setUserName(user.getUserName());
                        Session::USER_INFO->setPassword(user.getPassword());
                        Session::USER_INFO->setName(user.getName());
                        Session::USER_INFO->setEmail(user.getEmail());
                        cout << "ID User info = " << Session::USER_INFO->getId() << endl;
                        vector<UserRole> userRoles = UtilDAO::getUserRoleDAO()->findByIntProperties("user_id", user.getId());
                        if (!userRoles.empty()) {
                            Role role = UtilDAO::getRoleDAO()->findById(userRoles[0].getRoleId());
                            vector<Auth> auths = UtilDAO::getAuthDAO()->findByIntProperties("role_id", role.getId());
                            cout << "Role: " << endl;
                            cout << "Role name: " << role.getRoleName() << endl;
                            cout << "Description: " << role.getDescription() << endl;
                            for (Auth item : auths) {
                                Menu menu = UtilDAO::getMenuDAO()->findById(item.getId());
                                Session::LIST_MENU.push_back(menu);
                            }

                            for (Menu item : Session::LIST_MENU) {
                                Session::LIST_URL_MENU.push_back(item.getUrl());
                                cout << "ID: " << item.getId() << endl;
                                cout << "Url: " << item.getUrl() << endl;
                                cout << "Name: " << item.getName() << endl;
                            }

                        }
                        return;
                    }else {
                        ui->errorPassword->setText("Sai mật khẩu");
                    }
                }
                else {
                    ui->errorUserName->setText("Tên đăng nhập không tồn tại");
                }
    }
}


void FormLogin::on_inputUserName_textChanged(const QString &arg1)
{
    ui->errorUserName->setText("");
}


void FormLogin::on_inputPassword_textChanged(const QString &arg1)
{
    ui->errorPassword->setText("");
}

void FormLogin::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_Return :
    {
        ui->btnLogin->click();
        break;
    }
    }

}

