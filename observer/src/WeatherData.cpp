#include "WeatherData.hpp"

#include <algorithm>

void WeatherData::registerObserver(Observer* o) {
    observers_.push_back(o);
}

void WeatherData::removeObserver(Observer* o) {
    observers_.erase(std::find(begin(observers_), end(observers_), o));
}

void WeatherData::notifyObservers() const {
    for (auto el : observers_) {
        el->update(temperature_, humidity_, pressure_);
    }
}

void WeatherData::measurmentsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurments(double temperature, double humidity, double pressure) {
    temperature_ = temperature;
    humidity_ = humidity;
    pressure_ = pressure;
    measurmentsChanged();
}