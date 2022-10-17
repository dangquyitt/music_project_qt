
#include "formaddcategory.h"
#include "ui_formaddcategory.h"
#include "utildao.h"



FormAddCategory::FormAddCategory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormAddCategory)
{
    ui->setupUi(this);
    setWindowTitle("Thêm thể loại");
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

//    animation = new QPropertyAnimation(ui->label_4,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->label_4->geometry());
//    animation->start();

//    animation = new QPropertyAnimation(ui->lineEdit,"geometry");
//    animation -> setDuration(1000);
//    animation-> setStartValue(QRect(200,200,100,50));
//    animation ->setEndValue(ui->lineEdit->geometry());
//    animation->start();
}

FormAddCategory::~FormAddCategory()
{
    delete ui;
}

void FormAddCategory::on_btnSave_clicked()
{
    if(ui->category->text().isEmpty() || ui->category->text().isNull()) {
         ui->errorCategory->setText("Error");
         return;
    }
    string categoryText = ui->category->text().trimmed().toStdString();
    vector<Category> listCateogy = UtilDAO::getCategoryDAO()->findByProperties("category_name", categoryText);
    if(!listCateogy.empty()) {
        Category category;
        category.setCategoryName(categoryText);
        UtilDAO::getCategoryDAO()->save(category);
        ui->status->setText("Save Success");
        ui->category->setText("");
    } else {
        ui->status->setText("Save Error");
        ui->errorCategory->setText("Category is exist");
    }
}


void FormAddCategory::on_category_textChanged(const QString &arg1)
{
    ui->status->setText("");
    ui->errorCategory->setText("");
}

