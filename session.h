#ifndef SESSION_H
#define SESSION_H

#include"user.h"
#include<vector>
#include"menu.h"
#include "role.h"

class Session {
public:
    static User* USER_INFO;
    static vector<Menu> LIST_MENU;
    static vector<string> LIST_URL_MENU;
    static Role* ROLE_SYSTEM;
};

#endif // SESSION_H
