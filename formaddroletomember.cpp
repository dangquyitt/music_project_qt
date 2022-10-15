#include "formaddroletomember.h"
#include "ui_formaddroletomember.h"
#include "user.h"
#include "utildao.h"

FormAddRoleToMember::FormAddRoleToMember(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAddRoleToMember)
{
    ui->setupUi(this);
    initListRole();
    initListUser();
}

FormAddRoleToMember::~FormAddRoleToMember()
{
    delete ui;
}

void FormAddRoleToMember::on_btnAccept_clicked()
{
    int userId =  ui->selectUser->itemData(ui->selectUser->currentIndex()).value<int>();
    int roleId = ui->selectRole->itemData(ui->selectRole->currentIndex()).value<int>();
    vector<UserRole> userRoles = UtilDAO::getUserRoleDAO()->findByIntProperties("user_id", userId);
    UserRole userRole;
    userRole.setRoleId(roleId);
    userRole.setUserId(userId);
    if(!userRoles.empty()) {
        userRole = userRoles[0];
        if(UtilDAO::getUserRoleDAO()->update(userRole)) {
            // Update success
            cout << "Update success"<<endl;
        }
    } else {
        if(UtilDAO::getUserRoleDAO()->save(userRole)) {
            // Save success
            cout <<"Save success"<<endl;
        }
    }
}


void FormAddRoleToMember::initListUser() {
    vector<User> users = UtilDAO::getUserDAO()->findAll();
    int size = users.size();

    for(int i = 0; i < size; i++ ) {
        ui->selectUser->addItem(QString::fromStdString(users[i].getUserName()), users[i].getId());
    }
}

void FormAddRoleToMember::initListRole() {
    vector<Role> roles = UtilDAO::getRoleDAO()->findAll();
    int size = roles.size();

    for(int i = 0; i < size; i++ ) {
        ui->selectRole->addItem(QString::fromStdString(roles[i].getRoleName()), roles[i].getId());
    }
}
