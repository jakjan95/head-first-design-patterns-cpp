#pragma once

#include <iostream>
#include <memory>

#include "StreamingPlayer.hpp"
#include "Tuner.hpp"

class Amplifier {
public:
    Amplifier(const std::string& description)
        : description_{description} {}

    void on() {
        std::cout << description_ << " on\n";
    }

    void off() {
        std::cout << description_ << " off\n";
    }

    void setStereoSound() {
        std::cout << description_ << " stereo mode on\n";
    }

    void setSurroundSound() {
        std::cout << description_ << " surround sound on (5 speakers, 1 subwoofer)\n";
    }

    void setVolume(int level) {
        std::cout << description_ << " setting volume to " << level << '\n';
    }

    void setTuner(std::shared_ptr<Tuner> tuner) {
        tuner_ = tuner;
        std::cout << description_ << " setting tuner to " << *player_ << '\n';
    }

    void setStreamingPlayer(std::shared_ptr<StreamingPlayer> player) {
        player_ = player;
        std::cout << description_ << " setting Streaming player to " << *player_ << '\n';
    }

    friend std::ostream& operator<<(std::ostream& os, const Amplifier& amp) {
        os << amp.description_;
        return os;
    }

private:
    std::string description_;
    std::shared_ptr<Tuner> tuner_;
    std::shared_ptr<StreamingPlayer> player_;
};
