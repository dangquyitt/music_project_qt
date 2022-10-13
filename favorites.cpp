#include"favorites.h"

int Favorites::getId() {
    return id;
}
void Favorites::setId(int id) {
    this->id = id;
}

int Favorites::getUserId() {
    return userId;
}
void Favorites::setUserId(int userId) {
    this->userId = userId;
}

int Favorites::getMusicId() {
    return musicId;
}
void Favorites::setMusicId(int musicId) {
    this->musicId = musicId;
}

Favorites::Favorites() {
}

Favorites::~Favorites() {

}
