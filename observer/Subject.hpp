#pragma once

#include "Observer.hpp"
//meybe forward declaration class Observer; co by nie korzystac z includa :P
class Subject {
public:
    virtual void registerObserver(Observer* o) = 0;
    virtual void removeObserver(Observer* o) = 0;
    virtual void notifyObservers() const = 0;
    virtual ~Subject() = default;
};