#include "playlist.h"
#include <fstream>
#include "utildao.h"
#include "utils.h"


Playlist::Playlist()
{
    musics = UtilDAO::getMusicDAO()->findAll();
}


void Playlist::remove(int index)
{
    UtilDAO::getMusicDAO()->remove(musics[index].getId());
    musics.erase(musics.begin() + index);
}

void Playlist::edit(int index) {
    Music music = UtilDAO::getMusicDAO()->findById(musics[index].getId());
}

