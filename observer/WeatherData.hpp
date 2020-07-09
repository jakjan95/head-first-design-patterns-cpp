#pragma once

#include <algorithm>
#include <vector>

#include "Observer.hpp"
#include "Subject.hpp"

class WeatherData : public Subject {
public:
    WeatherData() = default;
    void registerObserver(Observer* o) override {
        observers_.push_back(o);
    }

    void removeObserver(Observer* o) override {
        //not sure if this will be working :)
        observers_.erase(std::find(begin(observers_), end(observers_), o));
    }

    void notifyObservers() const override {
        for (auto el : observers_) {
            el->update(temperature_, humidity_, pressure_);
        }
    }

    void measurmentsChanged() {
        notifyObservers();
    }

    void setMeasurments(double temperature, double humidity, double pressure) {
        temperature_ = temperature;
        humidity_ = humidity;
        pressure_ = pressure;
        measurmentsChanged();
    }

    //Other WeatherData methods here

private:
    std::vector<Observer*> observers_;
    double temperature_;
    double humidity_;
    double pressure_;
};