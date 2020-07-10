#include "ForecastDisplay.hpp"

#include <iostream>

ForecastDisplay::ForecastDisplay(Subject& weatherData)
    : weatherData_{weatherData} {
    weatherData_.registerObserver(this);
}

ForecastDisplay::~ForecastDisplay() {
    weatherData_.removeObserver(this);
}

void ForecastDisplay::update(double temperature, double humidity, double pressure) {
    lastPressure_ = currentPressure_;
    currentPressure_ = pressure;
    display();
}

void ForecastDisplay::display() const {
    std::cout << "Forecast: ";
    if (currentPressure_ > lastPressure_) {
        std::cout << "Improving weather on the way! :) \n";
    } else if (currentPressure_ < lastPressure_) {
        std::cout << "Watch out for cooler, rainy weather. :( \n";
    } else {
        std::cout << "More of the same! :| \n";
    }
}