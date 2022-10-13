#include"category.h"

int Category::getId() {
    return id;
}

void Category::setId(int id) {
    this->id = id;
}

string Category::getCategoryName() {
    return categoryName;
}

void Category::setCategoryName(string categoryName) {
    this->categoryName = categoryName;
}

Category::Category() {

}

Category::~Category() {

}
