#include "mainwindow.h"
#include "ui_mainwindow.h"

#include"formlogin.h"


FormLogin *formLoginMain;

Music MainWindow::musicEdit;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    cout <<"New window"<<endl;
    ui->setupUi(this);
    ui->bgContainer->setPixmap(QPixmap(":/resources/img/background-while.webp"));
    ui->bgContent->setPixmap(QPixmap(":/resources/img/background-while.webp"));

    this->setFixedSize(this->geometry().width(),this->geometry().height());

    loadCategory();
    updateList();

    connect(updater, SIGNAL(timeout()), this, SLOT(update()));

    player->setVolume(100);

    ui->listWidget->setCurrentRow(0);

    if(ui->listWidget->count() != 0){
        loadTrack();
        player->pause();
        updater->start();

    }
    ui->searchBar->setFocus();
    renderIcon();

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::renderIcon(){
     ui->userInfo->setText(QString::fromStdString(Session::USER_INFO->getName()));
     ui->roleInfo->setText(QString::fromStdString(Session::ROLE_SYSTEM->getDescription()));
     ui->addMusic->setIcon(QIcon(":/resources/img/add-music.png"));
     ui->deleteMusic->setIcon(QIcon(":/resources/img/delete.png"));
     ui->pushButton->setIcon(QIcon(":/resources/img/add-music.png"));
     ui->editMusic->setIcon(QIcon(":/resources/img/fix.png"));
     ui->btnListUser->setIcon(QIcon(":/resources/img/manager-user.png"));
     ui->btnProfile->setIcon(QIcon(":/resources/img/profile.png"));
     ui->btnLogout->setIcon(QIcon(":/resources/img/logout.png"));
     ui->btnReload->setIcon(QIcon(":/resources/img/reload.png"));
     ui->play->setIcon(QIcon(":/resources/img/pause.png"));
     ui->back->setIcon(QIcon(":/resources/img/back.png"));
     ui->forward->setIcon(QIcon(""));
     ui->shuffle->setIcon(QIcon(":/resources/img/shuffle.png"));
     ui->repeat->setIcon(QIcon(":/resources/img/replay.png"));
     ui->forward->setIcon(QIcon(":/resources/img/forward.png"));
     ui->mute->setIcon(QIcon(":/resources/img/volume.png"));
}


void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    lCounter = getIndex();


    ui->searchBar->clear();

    loadTrack();
    player->play();
    ui->play->setIcon(QIcon(":/resources/img/play.png"));
}


void MainWindow::on_play_clicked()
{
    if(ui->listWidget->count() != 0) {
        if(player->state() == QMediaPlayer::PlayingState)
        {
            player->pause();
            ui->play->setIcon(QIcon(":/resources/img/pause.png"));
        }
        else
        {
            player->play();
            ui->play->setIcon(QIcon(":/resources/img/play.png"));
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
    if(value != 0) {

        ui->mute->setIcon(QIcon(":/resources/img/volume.png"));
    } else {

        ui->mute->setIcon(QIcon(":/resources/img/mute.png"));
    }
}

void MainWindow::on_seekBar_sliderMoved(int position)
{
    player->setPosition(player->duration() / 1000 * position);

}

void MainWindow::on_mute_clicked()
{
    muted = !muted;
    if(muted) {
        player->setVolume(0);
        ui->mute->setIcon(QIcon(":/resources/img/mute.png"));
    } else {
        player->setVolume(ui->volumeBar->value());
        ui->mute->setIcon(QIcon(":/resources/img/volume.png"));
    }
}


void MainWindow::on_repeat_clicked()
{
     repeat = !repeat;
     if(repeat) {
         ui->repeat->setIcon(QIcon(":/resources/img/on-repeat.png"));
     } else{
        ui->repeat->setIcon(QIcon(":/resources/img/replay.png"));
     }
}


void MainWindow::on_shuffle_clicked()
{
    shuffle = !shuffle;
    if(shuffle) {
        shufflePlaylist();
        ui->shuffle->setIcon(QIcon(":/resources/img/on-shuffle.png"));
    } else {
        ui->shuffle->setIcon(QIcon(":/resources/img/shuffle.png"));
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

            ui->searchBar->clear();

           loadTrack();
           player->play();
           ui->play->setIcon(QIcon(":/resources/img/play.png"));
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
    ui->listWidget->setCurrentRow(getIndex());
    if(::find(Session::LIST_URL_MENU.begin(), Session::LIST_URL_MENU.end(), "add") != Session::LIST_URL_MENU.end()) {
        cout << "Show"<<endl;
        formAddTrackMain = new FormAddTrack;
        formAddTrackMain->show();
        cout << "Done Show"<<endl;
    } else {
        QMessageBox::warning(this, "Message", "Không có quyền truy cập");
        return;
    }


}


void MainWindow::on_btnLogout_clicked()
{
    Session::LIST_MENU.clear();
    Session::LIST_URL_MENU.clear();
    delete Session::USER_INFO;
    delete Session::ROLE_SYSTEM;
    formLoginMain = new FormLogin();
    formLoginMain->show();
    player->pause();
    close();

}


void MainWindow::on_editMusic_clicked()
{
    if(::find(Session::LIST_URL_MENU.begin(), Session::LIST_URL_MENU.end(), "edit") != Session::LIST_URL_MENU.end()) {
        musicEdit = UtilDAO::getMusicDAO()->findById(playlist.musics[getIndex()].getId());
        formAddTrackMain = new FormAddTrack();
        formAddTrackMain->show();
     }else {
         QMessageBox::warning(this, "Message", "Không có quyền truy cập");
         return;
     }

}


void MainWindow::on_deleteMusic_clicked()
{
    for(string item : Session::LIST_URL_MENU) {
        cout << item<<endl;
    }
    if(::find(Session::LIST_URL_MENU.begin(), Session::LIST_URL_MENU.end(), "remove") != Session::LIST_URL_MENU.end()) {
        int index = getIndex();
        if(index != -1)
        {
           playlist.remove(index);
           updateList();
           ui->listWidget->setCurrentRow(index);
           if(shuffle) shufflePlaylist();
        }
     }else {
         QMessageBox::warning(this, "Message", "Không có quyền truy cập");
         return;
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

void MainWindow::on_btnReload_clicked()
{
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
    ui->searchBar->setFocus();
    ui->listWidget->setCurrentRow(0);
}


void MainWindow::on_btnProfile_clicked()
{
    formProfileMain =new FormProfile;
    formProfileMain->show();
}


void MainWindow::on_btnListUser_clicked()
{
    if(::find(Session::LIST_URL_MENU.begin(), Session::LIST_URL_MENU.end(), "list_user") != Session::LIST_URL_MENU.end()) {
        formListUserMain  = new FormListUser;
        formListUserMain->show();
     }else {
         QMessageBox::warning(this, "Message", "Không có quyền truy cập");
         return;
     }

}

