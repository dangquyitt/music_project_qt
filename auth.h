#ifndef AUTH_H
#define AUTH_H
#include<string>

using namespace std;

class Auth {
private:
    int id;
    int roleId;
    int menuId;
    int permission;

public:
    Auth();
    ~Auth();

    int getId();
    void setId(int id);

    int getRoleId();
    void setRoleId(int roleId);

    int getMenuId();
    void setMenuId(int menuId);

    int getPermission();
    void setPermission(int permission);
};

#endif // AUTH_H
