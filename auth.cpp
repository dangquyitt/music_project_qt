#include"auth.h"

int Auth::getId() {
        return id;
}

void Auth::setId(int id) {
        this->id = id;
}

int Auth::getMenuId() {
        return menuId;
}

void Auth::setMenuId(int menuId) {
        this->menuId = menuId;
}

int Auth::getRoleId() {
        return roleId;
}

void Auth::setRoleId(int roleId) {
        this->roleId = roleId;
}

int Auth::getPermission() {
        return permission;
}

void Auth::setPermission(int permission) {
        this->permission = permission;
}


Auth::Auth() {

}

Auth::~Auth() {

}
