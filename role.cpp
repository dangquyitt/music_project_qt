#include"role.h"

int Role::getId() {
    return id;
}

void Role::setId(int id) {
    this->id = id;
}

string Role::getRoleName() {
    return roleName;
}

void Role::setRoleName(string roleName) {
    this->roleName = roleName;
}


string Role::getDescription() {
    return description;
}

void Role::setDescription(string description) {
     this->description = description;
}

Role::Role() {

}

Role::~Role() {

}
