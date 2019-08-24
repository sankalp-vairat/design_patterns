#include "stop_state.h"
#include "music_player.h"

StopState::StopState() {
    std::cout << "In Stopped State !";
}
StopState::~StopState() {
}

void StopState::start(MusicPlayer *m_player) {
    if(m_player == nullptr)
        return;
    m_player->set_state(MusicPlayer::PLAYING);
}
