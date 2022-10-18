#include "getconnectiondb.h"
#include<iostream>
using namespace std;
QSqlDatabase GetConnectionDB::db;

QSqlDatabase GetConnectionDB::getDB() {
    if(!db.isValid()) {
        cout << "Create db"<<endl;
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("D:\\DBMusicProject\\music_app.db");
    }
    db.open();
    cout << "Return db"<<endl;
    return db;
}
