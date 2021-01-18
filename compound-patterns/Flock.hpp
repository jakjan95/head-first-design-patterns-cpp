#pragma once

#include <memory>
#include <vector>

#include "Quackable.hpp"

class Flock : public Quackable {
public:
    void add(const std::shared_ptr<Quackable>& quacker) {
        quackers_.emplace_back(quacker);
    }

    void quack() override {
        for (auto it = quackers_.begin(); it != quackers_.end(); it++) {
            //in order to emulate iterator like in a java example
            (*it)->quack();
        }
    }

    void registerObserver(Observer* observer) override {
        for (auto& element : quackers_) {
            element->registerObserver(observer);
        }
    }

    void notifyObservers() override {
        for (auto& element : quackers_) {
            element->notifyObservers();
        }
    }

    std::string print() const {
        return "Big Flock";
    }

public:
    std::vector<std::shared_ptr<Quackable>> quackers_;
};
