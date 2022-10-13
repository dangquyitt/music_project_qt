#include"userrole.h"

int UserRole::getId() {
    return id;
}

void UserRole::setId(int id) {
    this->id = id;
}

int UserRole::getRoleId() {
    return roleId;
}

void UserRole::setRoleId(int roleId) {
    this->roleId = roleId;
}

int UserRole::getUserId() {
    return userId;
}

void UserRole::setUserId(int userId) {
    this->userId = userId;
}

UserRole::UserRole() {

}

UserRole::~UserRole() {

}
