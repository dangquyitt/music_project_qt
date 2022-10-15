#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"
#include "QDesktopServices"
#include <iostream>
#include <string>
#include"formlogin.h"



Music MainWindow::musicEdit;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setFixedSize(this->geometry().width(),this->geometry().height());

    loadCategory();
    updateList();

    connect(updater, SIGNAL(timeout()), this, SLOT(update()));

    player->setVolume(100);
ui->btnFavorites->setChecked(true);
    ui->listWidget->setCurrentRow(0);

    if(ui->listWidget->count() != 0){
        loadTrack();
        player->pause();
        updater->start();

    }

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    lCounter = getIndex();

    ui->play->setChecked(false);
    ui->searchBar->clear();

    loadTrack();
    player->play();
}


void MainWindow::on_play_clicked()
{
    if(ui->listWidget->count() != 0) {
        if(player->state() == QMediaPlayer::PlayingState)
        {
            player->pause();
        }
        else
        {
            player->play();
            updater->start();
        }
    }
}

void MainWindow::on_forward_clicked()
{   if(ui->listWidget->count() != 0) {
        if(repeat)
        {
            repeat = !repeat;
            next();
            repeat = !repeat;
        }
        else
        {
            next();
        }
    }
}

void MainWindow::on_back_clicked()
{   if(ui->listWidget->count() != 0) {
        if(player->position() > 3000)
        {
            player->setPosition(0);
        }
        else
        {
            back();
        }
    }
}

void MainWindow::on_volumeBar_valueChanged(int value)
{
    player->setVolume(value);
    (value != 0)?ui->mute->setChecked(false):ui->mute->setChecked(true);
}

void MainWindow::on_seekBar_sliderMoved(int position)
{
    player->setPosition(player->duration() / 1000 * position);

}

void MainWindow::on_mute_clicked()
{
    muted = !muted;
    (muted)?player->setVolume(0):player->setVolume(ui->volumeBar->value());
}


void MainWindow::on_repeat_clicked()
{
     repeat = !repeat;
}


void MainWindow::on_shuffle_clicked()
{
    shuffle = !shuffle;
    if(shuffle) {
        shufflePlaylist();
    }
}

void MainWindow::update()
{
    if(!ui->seekBar->isSliderDown()){
         ui->seekBar->setValue((double)player->position()/player->duration() * 1000);
    }

    if(player->state() == QMediaPlayer::StoppedState)
    {
        next();
    }
}

void MainWindow::updateList()
{

    ui->listWidget->clear();
    if(idCateogry == 0) {
        playlist.musics = UtilDAO::getMusicDAO()->findAll();
    } else {
        playlist.musics = UtilDAO::getMusicDAO()->findByIntProperties("category_id", idCateogry);
    }
    int size = playlist.musics.size();
    for(int i =0; i < size; i++) {
        ui->listWidget->addItem(QString::fromStdString(playlist.musics[i].getMusicName()));
    }
}

int MainWindow::getIndex()
{
    return ui->listWidget->currentIndex().row();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Return :
    {
        lCounter = getIndex();
        if(lCounter != -1)
        {
            ui->play->setChecked(false);
            ui->searchBar->clear();

           loadTrack();
           player->play();
        }
        break;
    }
    case Qt::Key_Up :
    {
        int ind = getIndex() - 1;if(ind < 0)ind = ui->listWidget->count() - 1;
        ui->listWidget->setCurrentRow(ind);
        break;
    }
    case Qt::Key_Down :
    {
        int ind = getIndex() + 1;if(ind >= ui->listWidget->count())ind = 0;
        ui->listWidget->setCurrentRow(ind);
        break;
    }
    default :
    {
        ui->searchBar->setFocus();

        break;
    }
    }
}

void MainWindow::next()
{
    lCounter++;

    if(repeat)
    {
        lCounter--;
    }

    if(lCounter >= ui->listWidget->count())
        lCounter = 0;

    (!shuffle || repeat) ? ui->listWidget->setCurrentRow(lCounter) : ui->listWidget->setCurrentRow(shuffledPlaylist[lCounter]);

    ui->play->setChecked(false);
    ui->searchBar->clear();

    loadTrack();
    player->play();

}

void MainWindow::back()
{
     lCounter--;

     if(lCounter < 0)
        lCounter = ui->listWidget->count() - 1;


     (!shuffle) ? ui->listWidget->setCurrentRow(lCounter) : ui->listWidget->setCurrentRow(shuffledPlaylist[lCounter]);

     ui->play->setChecked(false);
     ui->searchBar->clear();

     loadTrack();
     player->play();
}

void MainWindow::shufflePlaylist()
{
    shuffledPlaylist.resize(0);

    for(int i = 0; i < ui->listWidget->count(); i++)
    {
        shuffledPlaylist.push_back(i);
    }

    random_shuffle(shuffledPlaylist.begin(), shuffledPlaylist.end());
}

void MainWindow::loadTrack()
{
     QString qstr = QString::fromStdString(playlist.musics[getIndex()].getMusicUrl());
     player->setMedia(QUrl::fromLocalFile(qstr));
     qstr = QString::fromStdString(playlist.musics[getIndex()].getMusicName());
     ui->currentSong->setText(qstr);
     ui->imgMusic->setPixmap(QPixmap(QString::fromStdString(playlist.musics[getIndex()].getImgUrl())));
}

void MainWindow::on_searchBar_textChanged(const QString &arg1)
{
    if(ui->searchBar->text().toStdString() != "" ) {
        for(int i = 0; i < ui->listWidget->count(); i++)
        {
            if(ui->listWidget->item(i)->text().toLower().toStdString().find(arg1.toLower().toStdString()) != string::npos )
            {
                ui->listWidget->setCurrentRow(i);
                break;
            }
        }
    }

}

void MainWindow::on_addMusic_clicked()
{
    musicEdit.setId(0);
    cout << "Show"<<endl;
    formAddTrack =  new FormAddTrack();
    formAddTrack->show();
    cout << "Done Show"<<endl;
    updateList();
    bool startUpdater = false;
    if(ui->listWidget->count() == 0) {
        startUpdater = true;
    }
    if(shuffle) {
        shufflePlaylist();
    }
    if(startUpdater){
        updater->start();
    }
    ui->listWidget->setCurrentRow(getIndex());

}


void MainWindow::on_btnLogout_clicked()
{

}


void MainWindow::on_editMusic_clicked()
{
    musicEdit = UtilDAO::getMusicDAO()->findById(playlist.musics[getIndex()].getId());
    formAddTrack = new FormAddTrack();
    formAddTrack->show();
    updateList();
}


void MainWindow::on_deleteMusic_clicked()
{
    int index = getIndex();
    if(index != -1)
    {
       playlist.remove(index);
       updateList();
       ui->listWidget->setCurrentRow(index);
       if(shuffle) shufflePlaylist();
    }
}

void MainWindow::loadCategory() {
    vector<Category> listCategory = UtilDAO::getCategoryDAO()->findAll();
    int size = listCategory.size();
    ui->selectCategory->addItem("All", 0);
    for(int i = 0; i < size; i++ ) {
        ui->selectCategory->addItem(QString::fromStdString(listCategory[i].getCategoryName()), listCategory[i].getId());
    }
}


void MainWindow::on_selectCategory_currentIndexChanged(int index)
{
     idCateogry = ui->selectCategory->itemData(index).value<int>();
     updateList();
     ui->listWidget->setCurrentRow(0);
     if(shuffle) {
        shufflePlaylist();
     }
}


void MainWindow::on_btnFavorites_clicked()
{
    isFavorites = !isFavorites;
    if(isFavorites) {
        ui->btnFavorites->setChecked(false);
    }
}

