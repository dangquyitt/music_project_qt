#include "musicdao.h"
#include"musicdao.h"
#include <iostream>

vector<Music> MusicDAO::findAll() {

    vector<Music> list;
    string sql = "SELECT * FROM music";
    if(db.transaction()) {
        QSqlQuery query(db);
        query.exec(QString::fromStdString(sql));
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Music music;
            music.setId(query.value("id").toInt());
            music.setMusicName(query.value("music_name").toString().toStdString());
            music.setMusicUrl(query.value("music_url").toString().toStdString());
            music.setImgUrl(query.value("img_url").toString().toStdString());
            music.setRatting(query.value("ratting").toInt());
            music.setCategoryId(query.value("category_id").toInt());
            music.setReleaseYear(query.value("release_year").toInt());
            list.push_back(music);
        }
    }
    return list;
}

Music MusicDAO::findById(int id) {

    Music music;
    string sql = "SELECT * FROM music WHERE id = :id";
    if(db.transaction()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":id", id);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            music.setId(query.value("id").toInt());
            music.setMusicName(query.value("music_name").toString().toStdString());
            music.setMusicUrl(query.value("music_url").toString().toStdString());
            music.setImgUrl(query.value("img_url").toString().toStdString());
            music.setRatting(query.value("ratting").toInt());
            music.setCategoryId(query.value("category_id").toInt());
            music.setReleaseYear(query.value("release_year").toInt());
        }

    }
    return music;
}

vector<Music> MusicDAO::findByProperties(string properties, string value) {

    vector<Music> list;
    string sql = "SELECT * FROM music WHERE " + properties + " = :value";
    if(db.transaction()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", QString::fromStdString(value));
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Music music;
            music.setId(query.value("id").toInt());
            music.setMusicName(query.value("music_name").toString().toStdString());
            music.setMusicUrl(query.value("music_url").toString().toStdString());
            music.setImgUrl(query.value("img_url").toString().toStdString());
            music.setRatting(query.value("ratting").toInt());
            music.setCategoryId(query.value("category_id").toInt());
            music.setReleaseYear(query.value("release_year").toInt());
            list.push_back(music);
        }
    }
    return list;
}

vector<Music> MusicDAO::findByIntProperties(string properties, int value) {

    vector<Music> list;
    string sql = "SELECT * FROM music WHERE " + properties + " = :value";
    if( db.transaction()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":value", value);
        query.exec();
        if(!db.commit()) {
            db.rollback();
        }
        while(query.next()) {
            Music music;
            music.setId(query.value("id").toInt());
            music.setMusicName(query.value("music_name").toString().toStdString());
            music.setMusicUrl(query.value("music_url").toString().toStdString());
            music.setImgUrl(query.value("img_url").toString().toStdString());
            music.setRatting(query.value("ratting").toInt());
            music.setCategoryId(query.value("category_id").toInt());
            music.setReleaseYear(query.value("release_year").toInt());
            list.push_back(music);
        }
    }
    return list;
}

bool MusicDAO::save(Music instance) {
    string sql = "INSERT INTO music(music_name, music_url, img_url, ratting, category_id, release_year) VALUES (:musicName, :musicUrl, :imgUrl, :ratting, :categoryId, :realaseYear)";
    if(db.transaction()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":musicName", QString::fromStdString(instance.getMusicName()));
        query.bindValue(":musicUrl", QString::fromStdString(instance.getMusicUrl()));
        query.bindValue(":imgUrl", QString::fromStdString(instance.getImgUrl()));
        query.bindValue(":ratting", instance.getRatting());
        query.bindValue(":categoryId", instance.getCategoryId());
        query.bindValue(":realaseYear", instance.getReleaseYear());
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
bool MusicDAO::update(Music instance) {
    string sql = "UPDATE music SET music_name = :musicName, music_url = :musicUrl, img_url = :imgUrl, ratting = :ratting, category_id = :categoryId, release_year = :realseYear WHERE id = :id";

    if(db.transaction()) {
        QSqlQuery query(db);
        query.prepare(QString::fromStdString(sql));
        query.bindValue(":musicName", QString::fromStdString(instance.getMusicName()));
        query.bindValue(":musicUrl", QString::fromStdString(instance.getMusicUrl()));
        query.bindValue(":imgUrl", QString::fromStdString(instance.getImgUrl()));
        query.bindValue(":ratting", instance.getRatting());
        query.bindValue(":categoryId", instance.getCategoryId());
        query.bindValue(":realaseYear", instance.getReleaseYear());
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
bool MusicDAO::remove(int id) {
    string sql = "DELETE FROM music WHERE id = :id";

    if(db.transaction()) {
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

MusicDAO::MusicDAO() {
    db = GetConnectionDB::getDB();
}

MusicDAO::~MusicDAO() {
    db.close();
}
