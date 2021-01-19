#pragma once

#include <iostream>

#include "Observable.hpp"
#include "Quackable.hpp"

class MallardDuck : public Quackable {
public:
    explicit MallardDuck() {
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
        return "Mallard Duck";
    }

private:
    std::unique_ptr<Observable> observable_;
};
