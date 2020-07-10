#include "CurrentConditionDisplay.hpp"

#include <iostream>


CurrentConditionsDisplay::CurrentConditionsDisplay(Subject& weatherData)
    : temperature_{0.0}, humidity_{0.0}, weatherData_{weatherData} {
    weatherData_.registerObserver(this);
}

CurrentConditionsDisplay::~CurrentConditionsDisplay() {
    weatherData_.removeObserver(this);
}

void CurrentConditionsDisplay::update(double temperature, double humidity, double pressure) {
    temperature_ = temperature;
    humidity_ = humidity;
    display();
}

void CurrentConditionsDisplay::display() const {
    std::cout << "Current conditions: " << temperature_ << "C degrees and " << humidity_ << "% humidity\n";
}
