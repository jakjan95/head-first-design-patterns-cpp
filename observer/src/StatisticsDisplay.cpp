#include "StatisticsDisplay.hpp"

#include <iostream>

StatisticsDisplay::StatisticsDisplay(Subject& weatherData)
    : weatherData_{weatherData} {
    weatherData_.registerObserver(this);
}

StatisticsDisplay::~StatisticsDisplay() {
    weatherData_.removeObserver(this);
}

void StatisticsDisplay::update(double temperature, double humidity, double pressure) {
    totalTemperature_ += temperature;
    numberOfReadings_++;
    if (temperature > maxTemperature_) {
        maxTemperature_ = temperature;
    }
    if (temperature < minTemperature_) {
        minTemperature_ = temperature;
    }
    display();
}

void StatisticsDisplay::display() const {
    std::cout << "Avg / Max / Min temperature = " << static_cast<double>(totalTemperature_ / numberOfReadings_)
              << " / " << maxTemperature_ << " / " << minTemperature_ << '\n';
}