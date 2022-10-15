#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "playlist.h"
#include <QtMultimedia/QMediaPlayer>
#include "QTimer"
#include "QPalette"
#include <vector>
#include "QKeyEvent"
#include "QLineEdit"
#include "formaddtrack.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
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

    void on_btnFavorites_clicked();

private:
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

    FormAddTrack *formAddTrack;

    bool isFavorites = false;



protected:
    void keyPressEvent(QKeyEvent *event);

};

#endif // MAINWINDOW_H
