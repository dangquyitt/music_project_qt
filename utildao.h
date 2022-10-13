#ifndef UTILDAO_H
#define UTILDAO_H
#include "authdao.h"
#include "categorydao.h"
#include "menudao.h"
#include "roledao.h"
#include"userdao.h"
#include "userroledao.h"
#include"musicdao.h"

class UtilDAO
{

private:
    static UserDAO *userDAO;
    static RoleDAO *roleDAO;
    static UserRoleDAO *userRoleDAO;
    static MenuDAO *menuDAO;
    static AuthDAO *authDAO;
    static CategoryDAO *categoryDAO;
    static MusicDAO *musicDAO;
public:
    static UserDAO* getUserDAO();
    static RoleDAO* getRoleDAO();
    static UserRoleDAO*getUserRoleDAO();
    static MenuDAO *getMenuDAO();
    static AuthDAO *getAuthDAO();
    static CategoryDAO *getCategoryDAO();
    static MusicDAO *getMusicDAO();
};

#endif // UTILDAO_H
