#ifndef FORMADDROLETOMEMBER_H
#define FORMADDROLETOMEMBER_H

#include <QWidget>

namespace Ui {
class FormAddRoleToMember;
}

class FormAddRoleToMember : public QWidget
{
    Q_OBJECT

public:
    explicit FormAddRoleToMember(QWidget *parent = nullptr);
    ~FormAddRoleToMember();

private slots:
    void on_btnAccept_clicked();

private:
    Ui::FormAddRoleToMember *ui;
    void initListUser();
    void initListRole();
};

#endif // FORMADDROLETOMEMBER_H
