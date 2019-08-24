#include "pause_state.h"
#include "music_player.h"


PauseState::PauseState() {
    std::cout << "In Paused State!";
}

PauseState::~PauseState() {
}
void PauseState::start(MusicPlayer *m_player) {
    if(m_player == nullptr)
        return;
    m_player->set_state(MusicPlayer::PLAYING);
}

void PauseState::stop(MusicPlayer *m_player) {
    if(m_player == nullptr)
        return;
    m_player->set_state(MusicPlayer::STOPPED);
}
