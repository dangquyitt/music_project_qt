#include "utildao.h"

UserDAO* UtilDAO::userDAO = NULL;
RoleDAO* UtilDAO::roleDAO = NULL;
UserRoleDAO *UtilDAO::userRoleDAO = NULL;
MenuDAO *UtilDAO::menuDAO = NULL;
AuthDAO *UtilDAO::authDAO = NULL;
CategoryDAO* UtilDAO::categoryDAO = NULL;
MusicDAO* UtilDAO::musicDAO = NULL;

CategoryDAO *UtilDAO::getCategoryDAO()
{
    if(categoryDAO == NULL) {
        categoryDAO = new CategoryDAO;
    }
    return categoryDAO;
}

UserDAO* UtilDAO::getUserDAO() {
    if (userDAO == NULL) {
        userDAO = new UserDAO;
    }
    return userDAO;
}

RoleDAO* UtilDAO::getRoleDAO() {
    if (roleDAO == NULL) {
        roleDAO = new RoleDAO;
    }
    return roleDAO;
}

UserRoleDAO* UtilDAO::getUserRoleDAO() {
    if (userRoleDAO == NULL) {
        userRoleDAO = new UserRoleDAO;
    }
    return userRoleDAO;
}


AuthDAO* UtilDAO::getAuthDAO() {
    if (authDAO == NULL) {
        authDAO = new AuthDAO;
    }
    return authDAO;
}

MenuDAO* UtilDAO::getMenuDAO() {
    if (menuDAO == NULL) {
        menuDAO = new MenuDAO;
    }
    return menuDAO;
}

MusicDAO * UtilDAO::getMusicDAO() {
    if(musicDAO == NULL) {
        musicDAO = new MusicDAO;
    }
    return musicDAO;
}

