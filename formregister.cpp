#include "formlogin.h"
#include "formregister.h"
#include "ui_formregister.h"

FormLogin *formLoginRegister;
FormRegister::FormRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormRegister)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    hidePassword = true;
    ui->password->setEchoMode(QLineEdit::Password);
    ui->passwordCheck->setEchoMode(QLineEdit::Password);
    ui->btnHidenPassword->setIcon(QIcon(":/resources/img/hidden.png"));
    ui->bgContainer->setPixmap(QPixmap(":/resources/img/background-bule.jpg"));
    ui->bgContent->setPixmap(QPixmap(":/resources/img/background-while.webp"));
//    ui->btn->setIcon(QIcon(":/resources/img/hidden.png"));
//    ui->inputPassword->setEchoMode(QLineEdit::Password);
//    ui->hidePasswordbt->setIcon(QIcon(":/resources/img/hidden.png"));
//    animation = new QPropertyAnimation(ui->label_2,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_2->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->label_3,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_3->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->label,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->label_4,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_4->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->label_5,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_5->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->btnBack,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->btnBack->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->label_7,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_7->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->label_8,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_8->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->btnRegister,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->btnRegister->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->email,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->email->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->errorEmail,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->errorEmail->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->errorName,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->errorName->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->errorPasswordCheck,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->errorPasswordCheck->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->errorUserName,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->errorUserName->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->userName,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->userName->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->passwordCheck,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->passwordCheck->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->password,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->password->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->name,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->name->geometry());
//    animation->start();




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
            User newUser = UtilDAO::getUserDAO()->findByProperties("user_name", user.getUserName())[0];
            UserRole userRole;
            userRole.setRoleId(2);
            userRole.setUserId(newUser.getId());
            UtilDAO::getUserRoleDAO()->save(userRole);
            ui->stataus->setText("Register success");
        } else {
            // Tao tai khoan that bai
            ui->stataus->setText("Register error");
        }
    } else {
        // Tao tai khoan that bai
        ui->stataus->setText("Register error");
    }
}


void FormRegister::on_userName_textChanged(const QString &arg1)
{
    ui->errorUserName->setText("");
}




void FormRegister::on_password_textChanged(const QString &arg1)
{
    ui->errorPasswordCheck->setText("");
    ui->errorPassword->setText("");
    ui->stataus->setText("");
}


void FormRegister::on_passwordCheck_textChanged(const QString &arg1)
{
    if(arg1 != ui->password->text()) {
        ui->errorPasswordCheck->setText("Mật khẩu không trùng");
    } else {
        ui->errorPasswordCheck->setText("");
    }
    ui->stataus->setText("");
}


void FormRegister::on_name_textChanged(const QString &arg1)
{
    ui->errorName->setText("");
    ui->stataus->setText("");
}

void FormRegister::on_email_textChanged(const QString &arg1)
{
    ui->errorEmail->setText("");
    ui->stataus->setText("");
}


void FormRegister::on_btnBack_clicked()
{
    formLoginRegister = new FormLogin();
    formLoginRegister->show();
    close();
}




void FormRegister::on_btnHidenPassword_clicked()
{
    hidePassword = !hidePassword;
    if(hidePassword) {
        ui->password->setEchoMode(QLineEdit::Password);
        ui->passwordCheck->setEchoMode(QLineEdit::Password);
        ui->btnHidenPassword->setIcon(QIcon(":/resources/img/hidden.png"));
    } else {
        ui->password->setEchoMode(QLineEdit::Normal);
        ui->passwordCheck->setEchoMode(QLineEdit::Normal);
        ui->btnHidenPassword->setIcon(QIcon(":/resources/img/show.png"));
    }
}

