#pragma once

#include <iostream>
#include <map>

class CeilingFan {
public:
    enum class FanSpeed {
        off = 0,
        low = 1,
        medium = 2,
        high = 3
    };

    CeilingFan(const std::string& location)
        : location_{location}, speed_{FanSpeed::off} {}

    void low() {
        speed_ = FanSpeed::low;
        std::cout << location_ << " ceiling fan speed setted to low\n";
    }

    void medium() {
        speed_ = FanSpeed::medium;
        std::cout << location_ << " ceiling fan speed  setted to medium\n";
    }

    void high() {
        speed_ = FanSpeed::high;
        std::cout << location_ << " ceiling fan speed setted to high\n";
    }

    void off() {
        speed_ = FanSpeed::off;
        std::cout << location_ << " ceiling fan turned off\n";
    }

    std::string getSpeed() {
        std::map<FanSpeed, std::string> speedStrings{
            {FanSpeed::off, "off"}, {FanSpeed::low, "low"}, {FanSpeed::medium, "medium"}, {FanSpeed::high, "high"}};
        return speedStrings[speed_];
    }

private:
    std::string location_;
    FanSpeed speed_;
};
