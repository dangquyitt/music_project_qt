#include"userdao.h"

vector<User> UserDAO::findAll() {
    vector<User> list;

    if(db.transaction()) {
        QSqlQuery query(db);
        string sql = "SELECT * FROM user";
        query.exec(QString::fromStdString(sql));
        if(!db.commit()) {
            db.rollback();
        }

        while (query.next()) {
                User user;
                user.setId(query.value("id").toInt());
                user.setUserName( query.value("user_name").toString().toStdString());
                user.setPassword(query.value("password").toString().toStdString());
                user.setName(query.value("name").toString().toStdString());
                user.setEmail(query.value("email").toString().toStdString());
                list.push_back(user);
            }
    }

    return list;
}
User UserDAO::findById(int id) {

    User user;
    if(db.transaction()) {
        QSqlQuery query(db);
        string sql = "SELECT * FROM user WHERE id = :id";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id",id);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }

        while (query.next()) {
                user.setId(query.value("id").toInt());
                user.setUserName( query.value("user_name").toString().toStdString());
                user.setPassword(query.value("password").toString().toStdString());
                user.setName(query.value("name").toString().toStdString());
                user.setEmail(query.value("email").toString().toStdString());
            }
    }
    return user;
}

vector<User> UserDAO::findByProperties(string properties, string value) {

    vector<User> list;
    if(db.transaction()) {
        QSqlQuery query(db);
        string sql = "SELECT * FROM user WHERE " + properties + " = :value";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", QString::fromStdString(value));

        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while (query.next()) {
                User user;
                user.setId(query.value("id").toInt());
                user.setUserName( query.value("user_name").toString().toStdString());
                user.setPassword(query.value("password").toString().toStdString());
                user.setName(query.value("name").toString().toStdString());
                user.setEmail(query.value("email").toString().toStdString());
                list.push_back(user);
            }
    }

    return list;
}

bool UserDAO::save(User instance) {


        if(db.transaction()) {
            QSqlQuery query(db);
            string sql = "INSERT INTO user(user_name, password, name, email) VALUES (:userName, :password, :name, :email)";
            query.prepare(QString::fromStdString(sql));
            query.bindValue(":userName",QString::fromStdString(instance.getUserName()));
            query.bindValue(":password",QString::fromStdString(instance.getPassword()));
            query.bindValue(":name",QString::fromStdString(instance.getName()));
            query.bindValue(":email",QString::fromStdString(instance.getEmail()));
            query.exec();
            if(!db.commit()) {
                cout << "Rollback"<<endl;
                db.rollback();
                return false;
            }
            return true;
        }
        return false;
}
bool UserDAO::update(User instance) {

    if(db.transaction()) {
        QSqlQuery query(db);
        string sql = "UPDATE user SET user_name = :userName, password = :password, name = :name, email = :email WHERE id = :id";
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":userName",QString::fromStdString(instance.getUserName()));
        query.bindValue(":password",QString::fromStdString(instance.getPassword()));
        query.bindValue(":name",QString::fromStdString(instance.getName()));
        query.bindValue(":email",QString::fromStdString(instance.getEmail()));
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
bool UserDAO::remove(int id) {

    if(db.transaction()) {
        QSqlQuery query(db);
        string sql = "DELETE FROM user WHERE id = :id";
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

UserDAO::UserDAO() {
    db = GetConnectionDB::getDB();
}

UserDAO::~UserDAO() {
    db.close();
}
