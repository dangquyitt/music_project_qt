#include "formlistuser.h"
#include "ui_formlistuser.h"
#include "utildao.h"

#include <qboxlayout.h>
#include <qcombobox.h>
#include <qpushbutton.h>

FormListUser::FormListUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormListUser)
{
    ui->setupUi(this);
    roles = UtilDAO::getRoleDAO()->findAll();
    sizeRoles = roles.size();
    loadTitle();
    updateListUser();

//    animation = new QPropertyAnimation(ui->label,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->label_2,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_2->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->label_3,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_3->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->tableWidget,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->tableWidget->geometry());
//    animation->start();
}

FormListUser::~FormListUser()
{
    delete ui;
}

void FormListUser::updateListUser() {
    listUser.clear();
    listUser =  UtilDAO::getUserDAO()->findAll();
    int size = listUser.size();

    for(int i = 0; i < size; i++) {
        User user = listUser[i];
        ui->tableWidget->insertRow(i);
        QTableWidgetItem *id = new QTableWidgetItem;
        QTableWidgetItem *name = new QTableWidgetItem;
        QTableWidgetItem *email = new QTableWidgetItem;
        QTableWidgetItem *userName = new QTableWidgetItem;
        QTableWidgetItem *password = new QTableWidgetItem;
        id->setText(QString::number(user.getId()));
        name->setText(QString::fromStdString(user.getName()));
        email->setText(QString::fromStdString(user.getEmail()));
        userName->setText(QString::fromStdString(user.getUserName()));
        password->setText(QString::fromStdString(user.getPassword()));
        ui->tableWidget->setItem(i, 0, id);
        ui->tableWidget->setItem(i, 1, name);
        ui->tableWidget->setItem(i, 2, email);
        ui->tableWidget->setItem(i, 3, userName);
        ui->tableWidget->setItem(i, 4, password);


        QWidget* pWidget = new QWidget();
        QPushButton* btnRemove = new QPushButton();
        connect(btnRemove, &QPushButton::clicked, this, &FormListUser::onClicked);
        btnRemove->setText("Remove");
        QHBoxLayout* pLayout = new QHBoxLayout(pWidget);
        pLayout->addWidget(btnRemove);
        pLayout->setAlignment(Qt::AlignCenter);
        pLayout->setContentsMargins(0, 0, 0, 0);
        pWidget->setLayout(pLayout);
        ui->tableWidget->setCellWidget(i, 5, pWidget);
        QComboBox *combo = new QComboBox;;
        for(int j = 0; j < sizeRoles; j++) {
            combo->addItem(QString::fromStdString(roles[j].getRoleName()), roles[j].getId());
        }
        combo->setProperty("row", i);
        combo->setProperty("col", 6);
        ui->tableWidget->setCellWidget(i,6,combo);
        connect(combo, SIGNAL(currentIndexChanged(int)), this, SLOT(onComboIndexChanged()));
    }
}


void FormListUser::loadTitle() {
    QStringList labes;
    ui->tableWidget->setColumnCount(7);
    labes<<"ID"<<"Họ và tên"<<"Email"<<"Tên đăng nhập"<<"Mật khẩu"<<"Xóa"<<"Role";
    ui->tableWidget->setHorizontalHeaderLabels(labes);
}


void FormListUser::onClicked() {

    QWidget *w = qobject_cast<QWidget *>(sender()->parent());
        if(w){
            cout <<"Signal"<<endl;
            int row = ui->tableWidget->indexAt(w->pos()).row();
            UtilDAO::getUserDAO()->remove(listUser[row].getId());
            listUser.erase(listUser.begin() + row);
            ui->tableWidget->removeRow(row);
            ui->tableWidget->setCurrentCell(0, 0);
       }
}

void FormListUser::onComboIndexChanged() {
    QComboBox* combo = qobject_cast<QComboBox*>(sender());
    if(combo) {
        int row = sender()->property("row").toInt();
        int idRole = combo->itemData(combo->currentIndex()).value<int>();
        int idUser = listUser[row].getId();
        vector<UserRole> listUserRole = UtilDAO::getUserRoleDAO()->findByIntProperties("user_id", idUser);
        if(!listUserRole.empty()) {
            UserRole userRole = listUserRole[0];
            userRole.setRoleId(idRole);
            userRole.setUserId(idUser);
            UtilDAO::getUserRoleDAO()->update(userRole);
//            cout <<"Done"<<endl;

        }
//        cout <<"User id: "<<idUser<<endl;
//        cout << "Row: "<<row<<endl;
//        cout << "Role id: "<<idRole<<endl;
    }
}
