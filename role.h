#ifndef ROLE_H
#define ROLE_H
#include<string>

using namespace std;

class Role {
private:
    int id;
    string roleName;
    string description;

public:
    Role();
    ~Role();

    int getId();
    void setId(int id);

    string getRoleName();
    void setRoleName(string roleName);

    string getDescription();
    void setDescription(string description);
};
#endif // ROLE_H
