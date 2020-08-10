#pragma once

#include <iostream>

class GarageDoor {
public:
    void up() {
        std::cout << "Garage Door is open\n";
    }

    void down() {
        std::cout << "Garage Door is closed\n";
    }

    void stop() {
        std::cout << "Garage Door is paused\n";
    }

    void lightOn() {
        std::cout << "Light in garage is on\n";
    }

    void lightOff() {
        std::cout << "Light in garage is off\n";
    }
};
