#include "formaddtrack.h"
#include "mainwindow.h"
#include "ui_formaddtrack.h"

#include <qfiledialog.h>
#include   <iostream>
#include <category.h>
#include <qvariant.h>
#include <qdatetime.h>

using namespace std;

FormAddTrack::FormAddTrack(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAddTrack)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(),this->geometry().height());
    connect(ui->btnCancel, SIGNAL(clicked()), this, SLOT(close()));
    ui->releaseYear->setMaximum(QDateTime::currentDateTime().date().year());
    ui->releaseYear->setMinimum(1900);
    ui->releaseYear->setValue(QDateTime::currentDateTime().date().year());
    renderCategory();
    ui->ratting->setMaximum(5);
    ui->ratting->setMinimum(1);
    renderMusicEdit();
}

FormAddTrack::~FormAddTrack()
{
    delete ui;
}

void FormAddTrack::on_btnAddMusic_clicked()
{
    bool isError = false;
    if(ui->musicName->text().trimmed().isEmpty() || ui->musicName->text().trimmed().isNull() ) {
        ui->errorMusicName->setText("Không được để trống");
        isError=true;
    }
    if(ui->musicImg->text().trimmed().isEmpty() || ui->musicName->text().trimmed().isNull()) {
        ui->errorMusicImg->setText("Không được để trống");
        isError=true;
    }
    if(ui->musicUrl->text().trimmed().isEmpty() || ui->musicUrl->text().trimmed().isNull()) {
        ui->errorMusicUrl->setText("Không được để trống");
        isError=true;
    }

    if(!isError)  {
        Music music;
        music.setMusicName(ui->musicName->text().trimmed().toStdString());
        music.setMusicUrl(ui->musicUrl->text().trimmed().toStdString());
        music.setCategoryId(ui->category->itemData(ui->category->currentIndex()).value<int>());
        music.setImgUrl(ui->musicImg->text().trimmed().toStdString());
        music.setRatting(ui->ratting->value());
        music.setReleaseYear(ui->releaseYear->value());
        if(MainWindow::musicEdit.getId() != 0) {
            music.setId(MainWindow::musicEdit.getId());
            if(UtilDAO::getMusicDAO()->update(music)) {
                ui->statusInsert->setText("Update bài hát thành công");
            } else {
                ui->statusInsert->setText("Update bài hát thất bại");
            }
        } else {
            if(UtilDAO::getMusicDAO()->save(music)) {
                ui->statusInsert->setText("Thêm bài hát thành công");
                ui->musicImg->setText("");
                ui->musicUrl->setText("");
                ui->musicName->setText("");

            } else {
                ui->statusInsert->setText("Thêm bài hát thất bại");
            }
        }

    }
}




void FormAddTrack::on_btnMusicUrl_clicked()
{
       QString file = QFileDialog::getOpenFileName(this, tr("Select Music Files"), "~", tr("Audio Files (*.wav *.mp3)"));
       ui->musicUrl->setText(file);
}


void FormAddTrack::on_btnImgUrl_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, tr("Open Image"), "~", tr("Image Files (*.png *.jpg *.bmp)"));
    ui->musicImg->setText(file);
}

void FormAddTrack::renderCategory() {
    vector<Category> listCategory = UtilDAO::getCategoryDAO()->findAll();
    int size = listCategory.size();

    for(int i = 0; i < size; i++ ) {
        ui->category->addItem(QString::fromStdString(listCategory[i].getCategoryName()), listCategory[i].getId());
    }
}

void FormAddTrack::renderMusicEdit() {
    Music music =MainWindow::musicEdit;
    if(music.getId() != 0) {
        ui->musicImg->setText(QString::fromStdString(music.getImgUrl()));
        ui->musicUrl->setText(QString::fromStdString(music.getMusicUrl()));
        ui->musicName->setText(QString::fromStdString(music.getMusicName()));
        ui->releaseYear->setValue(music.getReleaseYear());
        ui->ratting->setValue(music.getRatting());
        ui->category->setCurrentIndex(music.getCategoryId());
    }
}




void FormAddTrack::on_btnCancel_clicked()
{

}

