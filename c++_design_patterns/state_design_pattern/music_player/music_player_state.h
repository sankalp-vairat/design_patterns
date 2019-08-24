#ifndef MUSIC_PLAYER_STATE_H
#define MUSIC_PLAYER_STATE_H
#include <iostream>

class MusicPlayer;

class MusicPlayerState {

public:
    MusicPlayerState();
    virtual ~MusicPlayerState();

    virtual void start(MusicPlayer *m_player);
    virtual void pause(MusicPlayer *m_player);
    virtual void stop(MusicPlayer *m_player);

};

#endif // MUSIC_PLAYER_STATE_H
