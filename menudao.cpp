#include "menudao.h"

vector<Menu> MenuDAO::findAll() {
    db.transaction();
    vector<Menu> list;
    if(db.transaction()) {
        string sql = "SELECT * FROM menu";
        QSqlQuery query(db);
        query.exec(QString::fromStdString(sql));
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Menu menu;
            menu.setId(query.value("id").toInt());
            menu.setUrl(query.value("url").toString().toStdString());
            menu.setName(query.value("name").toString().toStdString());
            list.push_back(menu);
        }
    }
    return list;
}
Menu MenuDAO::findById(int id) {
    Menu menu;
    if(db.transaction()) {
        string sql = "SELECT * FROM menu WHERE id = :id";
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id", id);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            menu.setId(query.value("id").toInt());
            menu.setUrl(query.value("url").toString().toStdString());
            menu.setName(query.value("name").toString().toStdString());
        }
    }
    return menu;
}

vector<Menu> MenuDAO::findByProperties(string properties, string value) {
    string sql = "SELECT * FROM menu WHERE " + properties + " = :value";
    vector<Menu> list;
    if(db.transaction()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", QString::fromStdString(value));
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Menu menu;
            menu.setId(query.value("id").toInt());
            menu.setUrl(query.value("url").toString().toStdString());
            menu.setName(query.value("name").toString().toStdString());
            list.push_back(menu);
        }
    }
    return list;
}

bool MenuDAO::save(Menu instance) {
    db.transaction();
    if(db.transaction()) {
        QSqlQuery query(db);
        string sql = "INSERT INTO menu(url, name) VALUES (:url, :name)";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":url", QString::fromStdString(instance.getUrl()));
        query.bindValue(":name", QString::fromStdString(instance.getName()));
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}
bool MenuDAO::update(Menu instance) {
    db.transaction();
    if(db.transaction()) {
        string sql = "UPDATE menu SET url = :url, name = :name WHERE id = :id";
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":url", QString::fromStdString(instance.getUrl()));
        query.bindValue(":name", QString::fromStdString(instance.getName()));
        query.bindValue(":id", instance.getId());
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}
bool MenuDAO::remove(int id) {

    if(db.transaction()) {
        string sql = "DELETE FROM role WHERE id = :id";
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id", id);
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}

MenuDAO::MenuDAO() {
    db = GetConnectionDB::getDB();
}

MenuDAO::~MenuDAO() {
    db.close();
}
