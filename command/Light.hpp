#pragma once

#include <iostream>

class Light {
public:
    void on() {
        std::cout << "Light is on!\n";
    }
    void off() {
        std::cout << "Light is off!\n";
    }
};
