#ifndef USERROLEDAO_H
#define USERROLEDAO_H
#include"BaseDAO.h"
#include"UserRole.h"

class UserRoleDAO : public BaseDAO<UserRole> {
public:
    UserRoleDAO();
    ~UserRoleDAO();
    vector<UserRole> findAll();
    UserRole findById(int id);
    vector<UserRole> findByProperties(string properties, string value);
    vector<UserRole> findByIntProperties(string properties, int value);
    bool save(UserRole instance);
    bool update(UserRole instance);
    bool remove(int id);
};
#endif // USERROLEDAO_H
