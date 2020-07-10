#pragma once

#include <limits>

#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class StatisticsDisplay : public Observer, public DisplayElement {
public:
    explicit StatisticsDisplay(Subject& weatherData);
    ~StatisticsDisplay();
    
    void update(double temperature, double humidity, double pressure) override;
    void display() const override;

private:
    double maxTemperature_ = std::numeric_limits<double>::min();
    double minTemperature_ = std::numeric_limits<double>::max();
    double totalTemperature_ = 0;
    int numberOfReadings_ = 0;
    Subject& weatherData_;
};