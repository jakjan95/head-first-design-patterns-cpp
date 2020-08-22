#include <iostream>
#include <memory>

#include "Amplifier.hpp"
#include "CdPlayer.hpp"
#include "PopcornPopper.hpp"
#include "Projector.hpp"
#include "Screen.hpp"
#include "StreamingPlayer.hpp"
#include "TheaterLights.hpp"
#include "Tuner.hpp"

#include "HomeTheaterFacade.hpp"

int main() {
    auto amp = std::make_shared<Amplifier>("Top-O-Line Amplifier");
    auto tuner = std::make_shared<Tuner>("Top-O-Line AM/FM Tuner", amp);
    auto player = std::make_shared<StreamingPlayer>("Top-O-Line Streaming Player", amp);
    auto cd = std::make_shared<CdPlayer>("Top-O-Line CD Player", amp);
    auto projector = std::make_shared<Projector>("Top-O-Line Projector", player);
    auto lights = std::make_shared<TheaterLights>("Theater Ceiling Lights");
    auto screen = std::make_shared<Screen>("Theater Screen");
    auto popper = std::make_shared<PopcornPopper>("Popcorn Popper");

    //auto homeTheater = std::make_shared<HomeTheaterFacade>(amp, tuner, player, cd, projector, lights, screen, popper);

    HomeTheaterFacade homeTheater(amp, tuner, player, cd, projector, lights, screen, popper);
    homeTheater.watchMovie("Mad Max 2");
    homeTheater.endMovie();

    // homeTheater->watchMovie("Mad Max 2");
    // homeTheater->endMovie();

    return 0;
}
