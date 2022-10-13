#include "roledao.h"

vector<Role> RoleDAO::findAll() {
    db.transaction();
    vector<Role> list;
    if(db.open()) {
        string sql = "SELECT * FROM role";
        QSqlQuery query(db);
        query.exec(QString::fromStdString(sql));
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Role role;
            role.setId(query.value("id").toInt());
            role.setRoleName(query.value("role_name").toString().toStdString());
            role.setDescription(query.value("description").toString().toStdString());
            list.push_back(role);
        }
    }
    return list;
}


Role RoleDAO::findById(int id) {
    db.transaction();
    Role role;
    string sql = "SELECT * FROM role WHERE id = :id";
    if(db.open()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id", id);
        query.exec();
        while (query.next()) {
            role.setId(query.value("id").toInt());
            role.setRoleName(query.value("role_name").toString().toStdString());
            role.setDescription(query.value("description").toString().toStdString());
        }
    }

    return role;
}

vector<Role> RoleDAO::findByProperties(string properties, string value) {
    db.transaction();
    vector<Role> list;
    string sql = "SELECT * FROM role WHERE " + properties + " = :value";
    if(db.open()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", QString::fromStdString(value));
        query.exec();
        if(db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Role role;
            role.setId(query.value("id").toInt());
            role.setRoleName(query.value("role_name").toString().toStdString());
            role.setDescription(query.value("description").toString().toStdString());
            list.push_back(role);
        }
    }
    return list;
}

bool RoleDAO::save(Role instance) {
    string sql = "INSERT INTO role(role_name, description) VALUES (:roleName, :description)";
    db.transaction();
    if(db.open()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":roleName", QString::fromStdString(instance.getRoleName()));
        query.bindValue(":description", QString::fromStdString(instance.getDescription()));
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}
bool RoleDAO::update(Role instance) {
    db.transaction();
    string sql = "UPDATE user SET role_name = :roleName, description = :description WHERE id = :id";
    if(db.open()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":roleName", QString::fromStdString(instance.getRoleName()));
        query.bindValue(":description", QString::fromStdString(instance.getDescription()));
        query.bindValue(":id", QString::fromStdString(instance.getDescription()));
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}
bool RoleDAO::remove(int id) {
    string sql = "DELETE FROM role WHERE id = :id";
    db.transaction();
    if(db.open()) {
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

RoleDAO::RoleDAO() {
    db = GetConnectionDB::getDB();
}

RoleDAO::~RoleDAO() {
   db.close();
}
