#include "formprofile.h"
#include "qevent.h"
#include "session.h"
#include "ui_formprofile.h"
#include "utildao.h"

FormProfile::FormProfile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormProfile)
{
    ui->setupUi(this);
    setWindowTitle("Hồ sơ");
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
    updateProfile();
    ui->bgContainer->setPixmap(QPixmap(":/resources/img/background-bule.jpg"));
    ui->bgContent->setPixmap(QPixmap(":/resources/img/background-while.webp"));
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

    ui->roleName->setText(QString::fromStdString(Session::ROLE_SYSTEM->getDescription()));
    ui->roleName->setReadOnly(true);
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

void FormProfile::keyPressEvent(QKeyEvent *event) {
    switch (event->key()) {
    case Qt::Key_Return :
    {
//        ui->btnAddMusic->click();
        break;
    }
    case Qt::Key_Escape:
        ui->btnCancel->click();
        break;
    }
}

