#ifndef FORMADDCATEGORY_H
#define FORMADDCATEGORY_H
#include"QPropertyAnimation"

#include <QWidget>
#include <string>
#include<vector>
#include "category.h"
using namespace std;
namespace Ui {
class FormAddCategory;
}

class FormAddCategory : public QWidget
{
    Q_OBJECT

public:
    explicit FormAddCategory(QWidget *parent = nullptr);
    ~FormAddCategory();

private slots:
    void on_btnSave_clicked();

    void on_category_textChanged(const QString &arg1);

private:
    Ui::FormAddCategory *ui;

};

#endif // FORMADDCATEGORY_H
