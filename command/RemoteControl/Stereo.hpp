#pragma once

#include <iostream>

class Stereo {
public:
    Stereo(const std::string& location)
        : location_{location} {}

    void on() {
        std::cout << location_ << " stereo is on!\n";
    }
    void off() {
        std::cout << location_ << " stereo is off!\n";
    }

    void setCD() {
        std::cout << location_ << " stereo is set for CD input!\n";
    }

    void setDVD() {
        std::cout << location_ << " stereo is set for DVD input!\n";
    }

    void setRadio() {
        std::cout << location_ << " stereo is set for radio!\n";
    }

    void setVolume(int volume) {
        if (volume >= 0 && volume <= 11) {
            std::cout << location_ << " stereo volume set to" << volume << '\n';
        } else {
            std::cout << "Invalid volume!\n";
        }
    }

private:
    std::string location_;
};
