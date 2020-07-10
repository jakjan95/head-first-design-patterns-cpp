#pragma once

#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
public:
    explicit CurrentConditionsDisplay(Subject& weatherData);
    ~CurrentConditionsDisplay();

    void update(double temperature, double humidity, double pressure) override;
    void display() const override;

private:
    double temperature_;
    double humidity_;
    Subject& weatherData_;
};