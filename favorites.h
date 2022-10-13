#ifndef FAVORITES_H
#define FAVORITES_H
#include<string>
using namespace std;

class Favorites
{
private:
    int id;
    int userId;
    int musicId;
public:
    Favorites();
    ~Favorites();

    int getId();
    void setId(int id);

    int getUserId();
    void setUserId(int userId);

    int getMusicId();
    void setMusicId(int musicId);
};




#endif // FAVORITES_H
