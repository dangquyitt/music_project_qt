#ifndef CATEGORYDAO_H
#define CATEGORYDAO_H
#include"category.h"
#include"basedao.h"
class CategoryDAO : public BaseDAO<Category> {
public:
    CategoryDAO();
    ~CategoryDAO();
    vector<Category> findAll();
    Category findById(int id);
    vector<Category> findByProperties(string properties, string value);
    bool save(Category instance);
    bool update(Category instance);
    bool remove(int id);
};

#endif // CATEGORYDAO_H
