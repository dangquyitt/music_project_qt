#ifndef USERROLE_H
#define USERROLE_H
#include<string>
#include"User.h"
using namespace std;

class UserRole {
private:
    int id;
    int roleId;
    int userId;
public:
    UserRole();
    ~UserRole();

    int getId();
    void setId(int id);
    int getRoleId();
    void setRoleId(int roleId);
    int getUserId();
    void setUserId(int userId);
};


#endif // USERROLE_H
