#include "music_player.h"
#include "pause_state.h"
#include "playing_state.h"
#include "stop_state.h"

MusicPlayer::MusicPlayer() {
    m_player_state = new StopState();
}

void MusicPlayer::play() {
    m_player_state->start(this);
}

void MusicPlayer::stop() {
    m_player_state->stop(this);
}

void MusicPlayer::pause() {
    m_player_state->pause(this);
}

void MusicPlayer::set_state(State state) {
    delete m_player_state;

    if(state == PLAYING) {
        m_player_state = new PlayingState();
    }
    if(state == STOPPED) {
        m_player_state = new StopState();
    }
    if(state == PAUSED) {
        m_player_state = new PauseState();
    }
}
