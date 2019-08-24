#include "playing_state.h"
#include "music_player.h"

PlayingState::PlayingState() {
    std::cout << "In Playing State";
}
PlayingState::~PlayingState() {
}

void PlayingState::pause(MusicPlayer *m_player) {
    if(m_player == nullptr)
        return;
    m_player->set_state(MusicPlayer::PAUSED);
}

void PlayingState::stop(MusicPlayer *m_player) {
    if(m_player == nullptr)
        return;
    m_player->set_state(MusicPlayer::STOPPED);
}
