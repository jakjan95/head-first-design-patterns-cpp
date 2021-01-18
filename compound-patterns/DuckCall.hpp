#pragma once

#include <iostream>

#include "Observable.hpp"
#include "Quackable.hpp"

class DuckCall : public Quackable {
public:
    explicit DuckCall() {
        observable_ = std::make_unique<Observable>(this);
    }

    void quack() {
        std::cout << "Kwak\n";
        notifyObservers();
    }

    void registerObserver(Observer* observer) override {
        observable_->registerObserver(observer);
    }

    void notifyObservers() override {
        observable_->notifyObservers();
    }

    std::string print() const {
        return "Duck Call";
    }

private:
    std::unique_ptr<Observable> observable_;
};
