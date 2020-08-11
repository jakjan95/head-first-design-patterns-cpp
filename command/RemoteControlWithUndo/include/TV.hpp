#pragma once

#include <iostream>

class TV {
public:
    TV(const std::string& location)
        : location_{location} {}

    void on() {
        std::cout << location_ << " TV is on!\n";
    }
    void off() {
        std::cout << location_ << " TV is off!\n";
    }

private:
    std::string location_;
};
