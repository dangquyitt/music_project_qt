#ifndef MUSICDAO_H
#define MUSICDAO_H

#include"basedao.h"
#include"music.h"

class MusicDAO : public BaseDAO<Music> {
public:
    MusicDAO();
    ~MusicDAO();
    vector<Music> findAll();
    Music findById(int id);
    vector<Music> findByProperties(string properties, string value);
    bool save(Music instance);
    bool update(Music instance);
    bool remove(int id);
};

#endif // MUSICDAO_H
