#ifndef MUSIC_H
#define MUSIC_H
#include<string>

using namespace std;

class Music
{
private:
    int id;
    string musicName;
    string musicUrl;
    string imgUrl;
    int ratting;
    int categoryId;
    int releaseYear;
public:
    Music();
    ~Music();


    int getId();
    void setId(int id);

    string getMusicName();
    void setMusicName(string musicName);

    string getMusicUrl();
    void setMusicUrl(string musicUrl);

    string getImgUrl();
    void setImgUrl(string imgUrl);

    int getRatting();
    void setRatting(int ratting);

    int getCategoryId();
    void setCategoryId(int categoryId);

    int getReleaseYear();
    void setReleaseYear(int releaseYear);

};


#endif // MUSIC_H
