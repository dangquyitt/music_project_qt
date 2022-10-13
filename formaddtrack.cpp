#include "formaddtrack.h"
#include "ui_formaddtrack.h"

#include <qfiledialog.h>
#include   <iostream>

using namespace std;

FormAddTrack::FormAddTrack(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAddTrack)
{
    ui->setupUi(this);
    renderCategory();
    ui->ratting->setMaximum(5);
    ui->ratting->setMinimum(1);
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

    cout << ui->releaseYear->date().year();
    if(!isError)  {
        Music music;
        music.setMusicName(ui->musicName->text().trimmed().toStdString());
        music.setMusicUrl(ui->musicUrl->text().trimmed().toStdString());
        music.setCategoryId(ui->category->currentIndex());
        music.setImgUrl(ui->musicImg->text().trimmed().toStdString());
        music.setRatting(ui->ratting->value());
        music.setReleaseYear(ui->releaseYear->date().year());
        UtilDAO::getMusicDAO()->save(music);
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

void FormAddTrack::on_category_activated(int index)
{

}

void FormAddTrack::renderCategory() {
    vector<Category> listCategory = UtilDAO::getCategoryDAO()->findAll();
    int size = listCategory.size();
    for(int i = 0; i < size; i++ ) {
        ui->category->insertItem(listCategory[i].getId(), QString::fromStdString(listCategory[i].getCategoryName()));
    }
}

