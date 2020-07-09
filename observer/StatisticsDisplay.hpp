#pragma once

#include <iostream>
#include <limits>

#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class StatisticsDisplay : public Observer, public DisplayElement {
public:
    explicit StatisticsDisplay(Subject& weatherData)
        : weatherData_{weatherData} {
        weatherData_.registerObserver(this);
    }

    void update(double temperature, double humidity, double pressure) override {
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

    void display() const override {
        std::cout << "Avg / Max / Min temperature = " << static_cast<double>(totalTemperature_ / numberOfReadings_)
                  << " / " << maxTemperature_ << " / " << minTemperature_ << '\n';
    }

private:
    double maxTemperature_ = std::numeric_limits<double>::min();
    double minTemperature_ = std::numeric_limits<double>::max();
    double totalTemperature_ = 0;
    int numberOfReadings_ = 0;
    Subject& weatherData_;
};