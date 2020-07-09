#pragma once

#include <iostream>

#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class ForecastDisplay : public Observer, public DisplayElement {
public:
    explicit ForecastDisplay(Subject& weatherData)
        : weatherData_{weatherData} {
        weatherData_.registerObserver(this);
    }

    void update(double temperature, double humidity, double pressure) override {
        lastPressure_ = currentPressure_;
        currentPressure_ = pressure;
        display();
    }

    void display() const override {
        std::cout << "Forecast: ";
        if (currentPressure_ > lastPressure_) {
            std::cout << "Improving weather on the way! :) \n";
        } else if (currentPressure_ < lastPressure_) {
            std::cout << "Watch out for cooler, rainy weather. :( \n";
        } else {
            std::cout << "More of the same! :| \n";
        }
    }

private:
    double currentPressure_ = 990;
    double lastPressure_;
    Subject& weatherData_;
};