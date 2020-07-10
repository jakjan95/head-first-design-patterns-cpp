#pragma once

#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class HeatIndexDisplay : public Observer, public DisplayElement {
public:
    explicit HeatIndexDisplay(Subject& weatherData);
    ~HeatIndexDisplay();

    void update(double temperature, double humidity, double pressure) override;
    double computeHeatIndex(double t, double rh);
    void display() const override;

private:
    double heatIndex_;
    Subject& weatherData_;
};