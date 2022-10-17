#ifndef FORMADDTRACK_H
#define FORMADDTRACK_H

#include <QWidget>
#include<vector>
#include"category.h"
#include"utildao.h"
#include"music.h"

#include <qfiledialog.h>
#include   <iostream>
#include <category.h>
#include <qvariant.h>

#include <qdatetime.h>
#include"QPropertyAnimation"

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

    void renderMusicEdit();

    void on_btnCancel_clicked();

private:
    Ui::FormAddTrack *ui;

    void renderCategory();

protected:
    void keyPressEvent(QKeyEvent *event);
};

#endif // FORMADDTRACK_H
