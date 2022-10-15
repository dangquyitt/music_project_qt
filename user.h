#ifndef USER_H
#define USER_H
#include<string>
#include<iostream>

using namespace std;

class User {
private:
    int id;
    string userName;
    string password;
    string name;
    string email;

public:
    User();
    ~User();

    int getId();
    void setId(int id);

    string getUserName();
    void setUserName(string userName);

    string getPassword();
    void setPassword(string password);

    string getName();
    void setName(string name);

    string getEmail();
    void setEmail(string email);

};

#endif // USER_H
