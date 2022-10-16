#include "formprofile.h"
#include "session.h"
#include "ui_formprofile.h"
#include "utildao.h"

FormProfile::FormProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormProfile)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    updateProfile();
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

//    animation = new QPropertyAnimation(ui->label_10,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_10->geometry());
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

//    animation = new QPropertyAnimation(ui->label_9,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_9->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->SRC,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->SRC->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->name,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->name->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->name_2,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->name_2->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->name_3,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->name_3->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->name_4,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->name_4->geometry());
//    animation->start();


}

void FormProfile::updateProfile() {
    ui->userName->setText(QString::fromStdString(Session::USER_INFO->getUserName()));
    ui->userName->setReadOnly(true);

    ui->email->setText(QString::fromStdString(Session::USER_INFO->getEmail()));
    ui->email->setReadOnly(true);

    ui->name->setText(QString::fromStdString(Session::USER_INFO->getName()));
    ui->name->setReadOnly(true);

    ui->password->setText(QString::fromStdString(Session::USER_INFO->getPassword()));
    ui->password->setReadOnly(true);
}

FormProfile::~FormProfile()
{
    delete ui;
}

void FormProfile::on_btnCancel_clicked()
{
    close( );
}



void FormProfile::on_btnSave_clicked()
{

}

