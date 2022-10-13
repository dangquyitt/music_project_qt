#ifndef AUTHDAO_H
#define AUTHDAO_H
#include"BaseDAO.h"

#include"Auth.h"

class AuthDAO : public BaseDAO<Auth> {
public:
    AuthDAO();
    ~AuthDAO();
    vector<Auth> findAll();
    Auth findById(int id);
    vector<Auth> findByProperties(string properties, string value);
    vector<Auth> findByIntProperties(string properties, int value);
    bool save(Auth instance);
    bool update(Auth instance);
    bool remove(int id);
};

#endif // AUTHDAO_H
