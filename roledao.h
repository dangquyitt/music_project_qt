#ifndef ROLEDAO_H
#define ROLEDAO_H

#include"basedao.h"

#include"role.h"

class RoleDAO : public BaseDAO<Role> {
public:
    RoleDAO();
    ~RoleDAO();
    vector<Role> findAll();
    Role findById(int id);
    vector<Role> findByProperties(string properties, string value);
    bool save(Role instance);
    bool update(Role instance);
    bool remove(int id);
};
#endif // ROLEDAO_H







