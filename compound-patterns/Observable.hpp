#pragma once

#include <memory>
#include <vector>

#include "Observer.hpp"
#include "QuackObservable.hpp"

//Tutaj jest cos popsute, cos nie tak

class Observable : public QuackObservable {
public:
    explicit Observable(QuackObservable* duck)
        : duck_{duck} {}

    void registerObserver(Observer* observer) override {
        observers_.emplace_back(observer);
    }

    void notifyObservers() override {
        for (auto element : observers_) {
            element->update(duck_);
        }
    }

private:
    std::vector<Observer*> observers_;
    QuackObservable* duck_;
};
