#ifndef MENUDAO_H
#define MENUDAO_H

#include"BaseDAO.h"
#include"Menu.h"

class MenuDAO : public BaseDAO<Menu> {
public:
    MenuDAO();
    ~MenuDAO();
    vector<Menu> findAll();
    Menu findById(int id);
    vector<Menu> findByProperties(string properties, string value);
    bool save(Menu instance);
    bool update(Menu instance);
    bool remove(int id);
};

#endif // MENUDAO_H
