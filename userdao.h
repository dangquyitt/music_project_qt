#ifndef USERDAO_H
#define USERDAO_H
#include"basedao.h"
#include"user.h"



class UserDAO : public BaseDAO<User> {
public:
    UserDAO();
    ~UserDAO();
    vector<User> findAll();
    User findById(int id);
    vector<User> findByProperties(string properties, string value);
    bool save(User instance);
    bool update(User instance);
    bool remove(int id);
};
#endif // USERDAO_H
