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

    void setSpeed(FanSpeed speed){
        speed_ = speed;
        std::cout << location_ << " ceiling fan speed is " << getSpeedString() << '\n';
    }

    std::string getSpeedString() {
        std::map<FanSpeed, std::string> speedStrings{
            {FanSpeed::off, "off"}, {FanSpeed::low, "low"}, {FanSpeed::medium, "medium"}, {FanSpeed::high, "high"}};
        return speedStrings[speed_];
    }

    FanSpeed getSpeed() {
        return speed_;
    }

private:
    std::string location_;
    FanSpeed speed_;
};
