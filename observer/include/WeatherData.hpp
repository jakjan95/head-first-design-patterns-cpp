#pragma once

#include <vector>

#include "Observer.hpp"
#include "Subject.hpp"

class WeatherData : public Subject {
public:
    WeatherData() = default;

    void registerObserver(Observer* o) override;
    void removeObserver(Observer* o) override;
    void notifyObservers() const override;
    void measurmentsChanged();
    void setMeasurments(double temperature, double humidity, double pressure);

    //Other WeatherData methods here

private:
    std::vector<Observer*> observers_;
    double temperature_;
    double humidity_;
    double pressure_;
};