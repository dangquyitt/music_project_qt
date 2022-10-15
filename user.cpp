#include"user.h"

int User::getId() {
    return id;
}

void User::setId(int id) {
    this->id = id;
}

string User::getUserName() {
    return userName;
}

void User::setUserName(string userName) {
    this->userName = userName;
}

string User::getPassword() {
    return password;
}

void User::setPassword(string password) {
    this->password = password;
}

string User::getName() {
    return name;
}

void User::setName(string name) {
    this->name = name;
}

string User::getEmail() {
    return email;
}

void User::setEmail(string email) {
    this->email = email;
}



User::User() {

}

User::~User() {

}
