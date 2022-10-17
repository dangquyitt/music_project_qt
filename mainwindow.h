#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playlist.h"
#include <QtMultimedia/QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include "formchangepassword.h"
#include <vector>
#include "QKeyEvent"
#include "QLineEdit"
#include "formaddtrack.h"
#include"qmessagebox.h"
#include<cstdlib>
#include<algorithm>
#include "QFileDialog"
#include "QDesktopServices"
#include "formprofile.h"
#include <formlistuser.h>
#include <iostream>
#include <qtimer.h>
#include <string>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    friend class FormAddTrack;
    static Music musicEdit;
private slots:

    void on_play_clicked();

    void on_volumeBar_valueChanged(int value);

    void on_seekBar_sliderMoved(int position);

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_forward_clicked();

    void on_back_clicked();

    void on_mute_clicked();

    void on_repeat_clicked();

    void on_shuffle_clicked();

    void update();

    void on_searchBar_textChanged(const QString &arg1);

    void on_addMusic_clicked();

    void on_btnLogout_clicked();

    void on_editMusic_clicked();

    void on_deleteMusic_clicked();
    void on_selectCategory_currentIndexChanged(int index);

    void on_btnReload_clicked();

    void on_btnProfile_clicked();

    void on_btnListUser_clicked();

    void on_btnChangePassword_clicked();

private:
    void renderIcon();
    void loadCategory();

    void updateList();

    void loadTrack();

    void next();

    void back();

    void shufflePlaylist();

    int getIndex();

    bool repeat = false;

    bool muted = false;

    bool shuffle = false;

    int lCounter = 0;

    int idCateogry = 0;

    Playlist playlist;

    Ui::MainWindow *ui;

    QTimer *updater = new QTimer(this);

    QMediaPlayer *player = new QMediaPlayer();

    vector<int> shuffledPlaylist;

    FormAddTrack *formAddTrackMain;

    FormProfile *formProfileMain;

    FormListUser *formListUserMain;

    FormChangePassword *formChangePassword;

protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // MAINWINDOW_H
