#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "QStringList"
#include <vector>
#include "music.h"


class Playlist
{
public:
    Playlist();

    void remove(int index);
    void edit(int index);

    vector<Music> musics;

private:

};

#endif // PLAYLIST_H
