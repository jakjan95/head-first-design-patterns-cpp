#pragma once

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

class HomeTheaterFacade {
public:
    HomeTheaterFacade(std::shared_ptr<Amplifier> amp,
                      std::shared_ptr<Tuner> tuner,
                      std::shared_ptr<StreamingPlayer> player,
                      std::shared_ptr<CdPlayer> cd,
                      std::shared_ptr<Projector> projector,
                      std::shared_ptr<TheaterLights> lights,
                      std::shared_ptr<Screen> screen,
                      std::shared_ptr<PopcornPopper> popcorn)
        : amp_{amp}, tuner_{tuner}, player_{player}, cd_{cd}, projector_{projector}, lights_{lights}, screen_{screen}, popcorn_{popcorn} {}

    void watchMovie(const std::string& movie) {
        std::cout << " Get ready to watchg a movie... \n";
        popcorn_->on();
        popcorn_->pop();
        lights_->dim(10);
        screen_->down();
        projector_->on();
        projector_->wideScreenMode();
        amp_->on();
        amp_->setStreamingPlayer(player_);
        amp_->setSurroundSound();
        amp_->setVolume(5);
        player_->on();
        player_->play(movie);
    }

    void endMovie() {
        std::cout << " Shutting movie theater down.. \n";
        popcorn_->off();
        lights_->off();
        screen_->up();
        projector_->off();
        amp_->off();
        player_->stop();
        player_->off();
    }

private:
    std::shared_ptr<Amplifier> amp_;
    std::shared_ptr<Tuner> tuner_;
    std::shared_ptr<StreamingPlayer> player_;
    std::shared_ptr<CdPlayer> cd_;
    std::shared_ptr<Projector> projector_;
    std::shared_ptr<TheaterLights> lights_;
    std::shared_ptr<Screen> screen_;
    std::shared_ptr<PopcornPopper> popcorn_;
};
