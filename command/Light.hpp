#pragma once

#include <iostream>

class Light {
public:
    Light(const std::string& location)
        : location_{location} {}

    void on() {
        std::cout << location_ << " light is on!\n";
    }
    void off() {
        std::cout << location_ << " light is off!\n";
    }

private:
    std::string location_;
};
