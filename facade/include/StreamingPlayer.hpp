#pragma once

#include <iostream>
#include <memory>

class Amplifier;

class StreamingPlayer {
public:
    StreamingPlayer(const std::string& description, std::shared_ptr<Amplifier> amplifier)
        : description_{description}, amplifier_{amplifier} {}

    void on() {
        std::cout << description_ << " on\n";
    }

    void off() {
        std::cout << description_ << " off\n";
    }

    void play(const std::string& movie) {
        movie_ = movie;
        std::cout << description_ << " + playing \"" << movie_ << "\"\n";
    }

    void stop() {
        std::cout << description_ << " + stopped \"" << movie_ << "\"\n";
    }

    void pause() {
        std::cout << description_ << " + paused \"" << movie_ << "\"\n";
    }

    void setTwoChannelAudio() {
        std::cout << description_ << " set two channel audio\n";
    }

    void setSurroundAudio() {
        std::cout << description_ << " set surround audio\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const StreamingPlayer& player) {
        os << player.description_;
        return os;
    }

private:
    std::string description_;
    std::shared_ptr<Amplifier> amplifier_;
    std::string movie_;
};
