#pragma once

#include <iostream>
#include <memory>

#include "Amplifier.hpp"

class CdPlayer {
public:
    CdPlayer(const std::string description, std::shared_ptr<Amplifier> amplifier)
        : description_{description}, amplifier_{amplifier} {}

    void on() {
        std::cout << description_ << " on\n";
    }

    void off() {
        std::cout << description_ << " off\n";
    }

    void eject() {
        title_ = nullptr;
        std::cout << description_ << " eject\n";
    }

    void play(const std::string& title) {
        title_ = title;
        std::cout << description_ << " playing \"" << title_ << "\"\n";
    }

    void stop() {
        std::cout << description_ << " stopped \n";
    }

    void pause() {
        std::cout << description_ << " stopped \n";
    }

    friend std::ostream& operator<<(std::ostream& os, const CdPlayer& player) {
        os << player.description_;
        return os;
    }

private:
    std::string description_;
    //int currentTrack;
    std::shared_ptr<Amplifier> amplifier_;
    std::string title_;
};
