#ifndef PLAYING_STATE_H
#define PLAYING_STATE_H
#include <iostream>
#include "music_player_state.h"

class MusicPlayer;

class PlayingState:public MusicPlayerState {

    public:
        PlayingState();
        virtual ~PlayingState();

        virtual void pause(MusicPlayer *m_player);
        virtual void stop(MusicPlayer *m_player);

};

#endif // PLAYING_STATE_H
