#ifndef PAUSE_STATE_H
#define PAUSE_STATE_H
#include <iostream>
#include "music_player_state.h"

class MusicPlayer;

class PauseState:public MusicPlayerState {

    public:
        PauseState();
        virtual ~PauseState();

        virtual void start(MusicPlayer *m_player);
        virtual void stop(MusicPlayer *m_player);

};



#endif // PAUSE_STATE_H
