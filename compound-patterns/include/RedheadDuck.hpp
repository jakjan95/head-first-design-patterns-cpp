#pragma once

#include <iostream>

#include "Quackable.hpp"
#include "Observable.hpp"


class RedheadDuck : public Quackable {
public:
    explicit RedheadDuck() {
        observable_ = std::make_unique<Observable>(this);
    }

    void quack() override {
        std::cout << "Quack\n";
        notifyObservers();
    }

    void registerObserver(Observer* observer) override {
        observable_->registerObserver(observer);
    }

    void notifyObservers() override {
        observable_->notifyObservers();
    }

    std::string print() const {
        return "Redhead Duck";
    }

private:
    std::unique_ptr<Observable> observable_;
};
