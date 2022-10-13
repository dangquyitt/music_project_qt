#ifndef SESSION_H
#define SESSION_H

#include"user.h"
#include<vector>
#include"menu.h"

class Session {
public:
    static User* USER_INFO;
    static vector<Menu> LIST_MENU;
    static vector<string> LIST_URL_MENU;
};

#endif // SESSION_H
