#pragma once

#include <iostream>

#include "Observable.hpp"
#include "Quackable.hpp"

class RubberDuck : public Quackable {
public:
    explicit RubberDuck() {
        observable_ = std::make_unique<Observable>(this);
    }

    void quack() {
        std::cout << "Squeak\n";
        notifyObservers();
    }

    void registerObserver(Observer* observer) override {
        observable_->registerObserver(observer);
    }

    void notifyObservers() override {
        observable_->notifyObservers();
    }

    std::string print() const {
        return "Rubber Duck";
    }

private:
    std::unique_ptr<Observable> observable_;
};
