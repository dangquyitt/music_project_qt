#include"menu.h"

int Menu::getId() {
    return id;
}
void Menu::setId(int id) {
    this->id = id;
}

string Menu::getUrl() {
    return url;
}
void Menu::setUrl(string url) {
    this->url = url;
}

string Menu::getName() {
    return name;
}
void Menu::setName(string name) {
    this->name = name;
}

Menu::Menu() {

}

Menu::~Menu() {

}
