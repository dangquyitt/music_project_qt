#ifndef FORMLISTUSER_H
#define FORMLISTUSER_H

#include "role.h"
#include "user.h"

#include <QWidget>
#include <qstandarditemmodel.h>
#include"QPropertyAnimation"
namespace Ui {
class FormListUser;
}

class FormListUser : public QWidget
{
    Q_OBJECT

public:
    explicit FormListUser(QWidget *parent = nullptr);
    ~FormListUser();
private slots:
    void onClicked();
    void onComboIndexChanged();


private:
    Ui::FormListUser *ui;
    vector<User> listUser;
    void loadTitle();
    void updateListUser();
    vector<Role> roles;
    int sizeRoles;    
      QPropertyAnimation *animation;
};

#endif // FORMLISTUSER_H
