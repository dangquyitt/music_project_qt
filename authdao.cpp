#include"authdao.h"

vector<Auth> AuthDAO::findAll() {
    db.transaction();
    vector<Auth> list;
    if(db.open()) {
        string sql = "SELECT * FROM auth";
        QSqlQuery query(db);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while (query.next()) {
            Auth auth;
            auth.setId(query.value("id").toInt());
            auth.setMenuId(query.value("menu_id").toInt());
            auth.setRoleId(query.value("role_id").toInt());
            auth.setPermission(query.value("permission").toInt());
            list.push_back(auth);
        }
    }
    return list;
}
Auth AuthDAO::findById(int id) {
    db.transaction();
    string sql = "SELECT * FROM auth WHERE id = :id";
    Auth auth;
    if(db.open()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id", id);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while (query.next()) {
            auth.setId(query.value("id").toInt());
            auth.setMenuId(query.value("menu_id").toInt());
            auth.setRoleId(query.value("role_id").toInt());
            auth.setPermission(query.value("permission").toInt());
        }
    }

    return auth;
}

vector<Auth> AuthDAO::findByProperties(string properties, string value) {
    string sql = "SELECT * FROM auth WHERE " + properties + " = :value";
    db.transaction();
    vector<Auth> list;
    if(db.open()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", QString::fromStdString(value));
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while (query.next()) {
            Auth auth;
            auth.setId(query.value("id").toInt());
            auth.setMenuId(query.value("menu_id").toInt());
            auth.setRoleId(query.value("role_id").toInt());
            auth.setPermission(query.value("permission").toInt());
            list.push_back(auth);
        }
    }

    return list;
}

vector<Auth> AuthDAO::findByIntProperties(string properties, int value) {
    string sql = "SELECT * FROM auth WHERE " + properties + " = :value";
    db.transaction();
    vector<Auth> list;
    if(db.open()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", value);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while (query.next()) {
            Auth auth;
            auth.setId(query.value("id").toInt());
            auth.setMenuId(query.value("menu_id").toInt());
            auth.setRoleId(query.value("role_id").toInt());
            auth.setPermission(query.value("permission").toInt());
            list.push_back(auth);
        }
    }

    return list;
}

bool AuthDAO::save(Auth instance) {
    string sql = "INSERT INTO auth(role_id, menu_id, permission) VALUES (:roleId, :menuId, :permission)";
    db.transaction();
    if(db.open()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":menuId", instance.getMenuId());
        query.bindValue(":roleId", instance.getRoleId());
        query.bindValue(":permission", 1);
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}
bool AuthDAO::update(Auth instance) {
        string sql = "UPDATE auth SET menu_id = :menuId, role_id = :roleId WHERE id = :id";
        db.transaction();
        if(db.open()) {
            QSqlQuery query(db);
            query.prepare(QString::fromStdString(sql));
            query.bindValue(":menuId", instance.getMenuId());
            query.bindValue(":roleId", instance.getRoleId());
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
bool AuthDAO::remove(int id) {
    string sql = "DELETE FROM auth WHERE id = :id";
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

AuthDAO::AuthDAO() {
    db = GetConnectionDB::getDB();
}

AuthDAO::~AuthDAO() {
    db.close();
}
