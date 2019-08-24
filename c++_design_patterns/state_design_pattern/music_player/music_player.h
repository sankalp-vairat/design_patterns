#ifndef MUSIC_PLAYER_H
#define MUSIC_PLAYER_H

#include <iostream>

class MusicPlayerState;

class MusicPlayer {
    public:

        enum State {
            PLAYING,
            PAUSED,
            STOPPED
        };

        MusicPlayer();
        ~MusicPlayer() = default;


        void play();
        void stop();
        void pause();

        void set_state(State state);
    private:
        MusicPlayerState *m_player_state;

};

#endif // MUSIC_PLAYER_H
