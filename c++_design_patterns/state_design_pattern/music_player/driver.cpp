#include <iostream>
#include "music_player.h"
#include "music_player_state.h"

int main() {

    MusicPlayer m_player;

    m_player.play();
    m_player.pause();
    m_player.stop();
    m_player.pause();


    return 0;
}
