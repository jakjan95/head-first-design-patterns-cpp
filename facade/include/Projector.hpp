#pragma once

#include <iostream>
#include <memory>

#include "StreamingPlayer.hpp"

class Projector {
public:
    Projector(const std::string& description, std::shared_ptr<StreamingPlayer> player)
        : description_{description}, player_{std::move(player)} {}

    void on() {
        std::cout << description_ << " on\n";
    }

    void off() {
        std::cout << description_ << " off\n";
    }

    void wideScreenMode() {
        std::cout << description_ << " in widescreen mode(16x9 aspect ratio)\n";
    }

    void tvMode() {
        std::cout << description_ << " in tv mode(4x3 aspect ratio)\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const Projector& projector) {
        os << projector.description_;
        return os;
    }

private:
    std::string description_;
    std::shared_ptr<StreamingPlayer> player_;
};
