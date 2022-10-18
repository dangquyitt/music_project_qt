#include "formchangepassword.h"

#include "qevent.h"
#include "ui_formchangepassword.h"


using namespace std;

FormChangePassword::FormChangePassword(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormChangePassword)
{
    ui->setupUi(this);
    ui->bgContainer->setPixmap(QPixmap(":/resources/img/Tong-hop-cac-hinh-anh-background-dep-nhat-21.jpg"));
    ui->bgContent->setPixmap(QPixmap(":/resources/img/background-while.webp"));

    ui->newPassword->setEchoMode(QLineEdit::Password);
    ui->confirmPassword->setEchoMode(QLineEdit::Password);
    ui->btnHidenNewPassword->setIcon(QIcon(":/resources/img/hidden.png"));

    ui->oldPassword->setEchoMode(QLineEdit::Password);
    ui->btnHidenOldPassword->setIcon(QIcon(":/resources/img/hidden.png"));
}

FormChangePassword::~FormChangePassword()
{
    delete ui;
}

bool FormChangePassword::validatorPassword(string password) {
    // (?=.*?[A-Z]): It nhat mot chu cai viet hoa.
    // (?=.*?[a-z]): It nhat mot chu cai viet thuong.
    // (?=.*?[0-9]): It nhat mot so.
    // .{8,}: It nhat 8 ki tu.
    string passwordRegex = "^(?=[a-zA-Z0-9#@$?]{8,}$)(?=.*?[a-z])(?=.*?[A-Z])(?=.*?[0-9]).*";
    return regex_match(password, regex(passwordRegex));
}

void FormChangePassword::on_btnSave_clicked()
{
    bool isPassed = true;
    string oldPassword = ui->oldPassword->text().toStdString();
    string newPassword = ui->newPassword->text().toStdString();
    string confirmPassword =ui->confirmPassword->text().toStdString();
    if(oldPassword != Session::USER_INFO->getPassword()) {
        ui->errorOldPassword->setText("Sai mật khẩu");
        isPassed = false;
    }
    if(!validatorPassword(ui->newPassword->text().toStdString())) {
        ui->errorNewPassword->setText("Mật khẩu không hợp lệ");
        isPassed=false;
    }

     if(ui->newPassword->text() != ui->confirmPassword->text()) {
        ui->errorConfirmPassword->setText("Mật khẩu không trùng");
        isPassed= false;
     }

     if(isPassed) {
        User user;
        Session::USER_INFO->setPassword(newPassword);
        user.setId(Session::USER_INFO->getId());
        user.setUserName(Session::USER_INFO->getUserName());
        user.setName(Session::USER_INFO->getName());
        user.setEmail(Session::USER_INFO->getEmail());
        user.setPassword(newPassword);
        if(UtilDAO::getUserDAO()->update(user)) {
            QMessageBox::information(this, "Message", "Đổi mật khẩu thành công");
            ui->btnCancel->click();
        } else {
            ui->stataus->setText("Save error");
        }
     } else {
        ui->stataus->setText("Save error");
     }
}




void FormChangePassword::on_newPassword_textChanged(const QString &arg1)
{
    ui->errorNewPassword->setText("");
    ui->stataus->setText("");
    ui->errorConfirmPassword->setText("");
}


void FormChangePassword::on_oldPassword_textChanged(const QString &arg1)
{
    ui->errorOldPassword->setText("");
    ui->stataus->setText("");
}


void FormChangePassword::on_confirmPassword_textChanged(const QString &arg1)
{
    ui->stataus->setText("");
    if(ui->newPassword->text() != arg1) {
        ui->errorConfirmPassword->setText("Mật khẩu không trùng");
    } else {
        ui->errorConfirmPassword->setText("");
    }
}


void FormChangePassword::on_btnHidenNewPassword_clicked()
{
    hidenNewPasswod = !hidenNewPasswod;
    if(hidenNewPasswod) {
        ui->newPassword->setEchoMode(QLineEdit::Password);
        ui->confirmPassword->setEchoMode(QLineEdit::Password);
        ui->btnHidenNewPassword->setIcon(QIcon(":/resources/img/hidden.png"));
    } else {
        ui->newPassword->setEchoMode(QLineEdit::Normal);
        ui->confirmPassword->setEchoMode(QLineEdit::Normal);
        ui->btnHidenNewPassword->setIcon(QIcon(":/resources/img/show.png"));
    }
}


void FormChangePassword::on_btnHidenOldPassword_clicked()
{
    hidenOldPassword = !hidenOldPassword;
    if(hidenOldPassword) {
        ui->oldPassword->setEchoMode(QLineEdit::Password);
        ui->btnHidenOldPassword->setIcon(QIcon(":/resources/img/hidden.png"));
    } else {
        ui->oldPassword->setEchoMode(QLineEdit::Normal);
        ui->btnHidenOldPassword->setIcon(QIcon(":/resources/img/show.png"));
    }
}

void FormChangePassword::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_Return :
    {
        ui->btnSave->click();
        break;
    }
    case Qt::Key_Escape:
        ui->btnCancel->click();
        break;
    }
}


void FormChangePassword::on_btnCancel_clicked()
{
    close();
}

