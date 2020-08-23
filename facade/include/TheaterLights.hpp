#pragma once

#include <iostream>

class TheaterLights {
public:
    TheaterLights(const std::string& description)
        : description_{description} {}

    void on() {
        std::cout << description_ << " on\n";
    }

    void off() {
        std::cout << description_ << " off\n";
    }

    void dim(int level) {
        std::cout << description_ << " dimming to " << level << "%\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const TheaterLights& screen) {
        os << screen.description_;
        return os;
    }

private:
    std::string description_;
};
