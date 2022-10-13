#include "userroledao.h"

vector<UserRole> UserRoleDAO::findAll() {
    vector<UserRole> list;
    db.transaction();
    if(db.open()) {
        QSqlQuery query(db);
        string sql = "SELECT * FROM user_role";
        query.exec(QString::fromStdString(sql));
        if(!db.commit()) {
            db.rollback();
        }
        while (query.next()) {
            UserRole userRole;
            userRole.setId(query.value("id").toInt());
            userRole.setUserId(query.value("user_id").toInt());
            userRole.setRoleId(query.value("role_id").toInt());
            list.push_back(userRole);
        }
    }
    return list;
}
UserRole UserRoleDAO::findById(int id) {
    db.transaction();
    UserRole userRole;
    if(db.open()) {
        QSqlQuery query(db);
        string sql = "SELECT * FROM user_role WHERE id = :id";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id", id);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
         while (query.next()) {
             userRole.setId(query.value("id").toInt());
             userRole.setUserId(query.value("user_id").toInt());
             userRole.setRoleId(query.value("role_id").toInt());
         }
     }
    return userRole;
}

vector<UserRole> UserRoleDAO::findByProperties(string properties, string value) {
    db.transaction();
    vector<UserRole> list;
    QSqlQuery query(db);
    string sql = "SELECT * FROM user_role WHERE " + properties + " = :value";
    if(db.open()) {
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", QString::fromStdString(value));
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while (query.next()) {
            UserRole userRole;
            userRole.setId(query.value("id").toInt());
            userRole.setUserId(query.value("user_id").toInt());
            userRole.setRoleId(query.value("role_id").toInt());
            list.push_back(userRole);
        }
    }

    return list;
}

vector<UserRole> UserRoleDAO::findByIntProperties(string properties, int value) {
    db.transaction();
    vector<UserRole> list;
    QSqlQuery query(db);
    string sql = "SELECT * FROM user_role WHERE " + properties + " = :value";
    if(db.open()) {
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", value);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while (query.next()) {
            UserRole userRole;
            userRole.setId(query.value("id").toInt());
            userRole.setUserId(query.value("user_id").toInt());
            userRole.setRoleId(query.value("role_id").toInt());
            list.push_back(userRole);
        }
    }

    return list;
}


bool UserRoleDAO::save(UserRole instance) {
    db.transaction();
    if(db.open()) {
        QSqlQuery query(db);
        string sql = "INSERT INTO user_role(user_id, role_id) VALUES (:userId, :roleId)";
        query.prepare(QString::fromStdString(sql));
        query.bindValue("userId", instance.getUserId());
        query.bindValue("roleId", instance.getRoleId());
        query.exec();
        if(!db.commit()) {
            db.rollback();
            return false;
        }
        return true;
    }
    return false;
}
bool UserRoleDAO::update(UserRole instance) {
    db.transaction();
    if(db.open()) {
        string sql = "UPDATE user_role SET user_id = :userId, role_id = :roleId WHERE id = :id";
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":userId", instance.getUserId());
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
bool UserRoleDAO::remove(int id) {
    db.transaction();
    if(db.open()) {
        string sql = "DELETE FROM user_role WHERE id = :id";
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql)) ;
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

UserRoleDAO::UserRoleDAO() {
    db =  GetConnectionDB::getDB();
}

UserRoleDAO::~UserRoleDAO() {
    db.close();
}
