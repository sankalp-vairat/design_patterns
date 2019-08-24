#include "music_player_state.h"
#include "music_player.h"
MusicPlayerState::MusicPlayerState() {
}
MusicPlayerState::~MusicPlayerState(){
}

void MusicPlayerState::start(MusicPlayer *m_player) {
    std::cout << "Invalid State !" << std::endl;
}
void MusicPlayerState::pause(MusicPlayer *m_player){
    std::cout << "Invalid State !" << std::endl;
}
void MusicPlayerState::stop(MusicPlayer *m_player){
    std::cout << "Invalid State !" << std::endl;
}
