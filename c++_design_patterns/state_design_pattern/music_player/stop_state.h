#ifndef STOP_STATE_H
#define STOP_STATE_H
#include <iostream>
#include "music_player_state.h"

class MusicPlayer;

class StopState:public MusicPlayerState {

    public:
        StopState();
        virtual ~StopState();

        virtual void start(MusicPlayer *m_player);

};

#endif // STOP_STATE_H
