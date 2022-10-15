#ifndef FORMLISTUSER_H
#define FORMLISTUSER_H

#include "role.h"
#include "user.h"

#include <QWidget>
#include <qstandarditemmodel.h>

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
    void changeSelect(int index);

private:
    Ui::FormListUser *ui;
    vector<User> listUser;
    void loadTitle();
    void updateListUser();
    vector<Role> roles;
    int sizeRoles;
};

#endif // FORMLISTUSER_H
