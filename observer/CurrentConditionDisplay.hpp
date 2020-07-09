#pragma once

#include <iostream>

#include "DisplayElement.hpp"
#include "Observer.hpp"
#include "Subject.hpp"

class CurrentConditionsDisplay : public Observer, public DisplayElement {
public:
    explicit CurrentConditionsDisplay(Subject& weatherData)
        : temperature_{0.0}, humidity_{0.0}, weatherData_{weatherData} {
        weatherData_.registerObserver(this);
    }

    void update(double temperature, double humidity, double pressure) override {
        temperature_ = temperature;
        humidity_ = humidity;
        display();
    }

    void display() const override {
        std::cout << "Current conditions: " << temperature_ << "C degrees and " << humidity_ << "% humidity\n";
    }

private:
    double temperature_;
    double humidity_;
    Subject& weatherData_;
};