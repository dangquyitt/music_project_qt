#ifndef FORMPROFILE_H
#define FORMPROFILE_H

#include <QWidget>
#include <regex>
#include <string>
#include"QPropertyAnimation"
using namespace std;
namespace Ui {
class FormProfile;
}

class FormProfile : public QWidget
{
    Q_OBJECT

public:
    explicit FormProfile(QWidget *parent = nullptr);
    ~FormProfile();

private slots:
    void on_btnCancel_clicked();


    void on_btnSave_clicked();

private:
    void updateProfile();
    Ui::FormProfile *ui;

};

#endif // FORMPROFILE_H
