#pragma once
#include<string>
#include<vector>
#include"QSqlDatabase"
#include"QSqlQuery"
#include "qvariant.h"
#include"getconnectiondb.h"


using namespace std;


template<class T>
class BaseDAO {
public:
    virtual vector<T> findAll() = 0;
    virtual T findById(int id) = 0;
    virtual vector<T> findByProperties(string properties, string value) = 0;
    virtual bool save(T instance) = 0;
    virtual bool update(T instance) = 0;
    virtual bool remove(int id) = 0;
protected:
    QSqlDatabase db;
};
