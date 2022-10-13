#include"music.h"

int Music::getId() {
    return id;
}
void Music::setId(int id) {
    this->id = id;
}

string Music::getMusicName() {
    return musicName;
}
void Music::setMusicName(string musicName) {
    this->musicName = musicName;
}

string Music::getMusicUrl() {
    return musicUrl;
}
void Music::setMusicUrl(string musicUrl) {
    this->musicUrl = musicUrl;
}

string Music::getImgUrl() {
    return imgUrl;
}
void Music::setImgUrl(string imgUrl) {
    this->imgUrl = imgUrl;
}

int Music::getRatting() {
    return ratting;
}
void Music::setRatting(int ratting) {
    this->ratting = ratting;
}

int Music::getCategoryId() {
    return categoryId;
}
void Music::setCategoryId(int categoryId) {
    this->categoryId = categoryId;
}

int Music::getReleaseYear() {
    return releaseYear;
}
void Music::setReleaseYear(int releaseYear) {
    this->releaseYear = releaseYear;
}

Music::Music() {

}

Music::~Music() {

}
