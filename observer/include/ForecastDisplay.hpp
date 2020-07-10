#pragma once

#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class ForecastDisplay : public Observer, public DisplayElement {
public:
    explicit ForecastDisplay(Subject& weatherData);
    ~ForecastDisplay();

    void update(double temperature, double humidity, double pressure);
    void display() const override;

private:
    double currentPressure_ = 990;
    double lastPressure_;
    Subject& weatherData_;
};