#ifndef FORMADDTRACK_H
#define FORMADDTRACK_H

#include <QWidget>
#include<vector>
#include"category.h"
#include"utildao.h"
#include"music.h"

namespace Ui {
class FormAddTrack;
}

class FormAddTrack : public QWidget
{
    Q_OBJECT

public:
    explicit FormAddTrack(QWidget *parent = nullptr);
    ~FormAddTrack();

private slots:
    void on_btnAddMusic_clicked();

    void on_btnMusicUrl_clicked();

    void on_btnImgUrl_clicked();


    void on_category_activated(int index);

private:
    Ui::FormAddTrack *ui;

    void renderCategory();
};

#endif // FORMADDTRACK_H
