#ifndef GETCONNECTIONDB_H
#define GETCONNECTIONDB_H


#include "qsqldatabase.h"
class GetConnectionDB
{
private:
    static QSqlDatabase db;

public:
    static QSqlDatabase getDB();
};

#endif // GETCONNECTIONDB_H
