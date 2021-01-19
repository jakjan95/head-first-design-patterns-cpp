#pragma once

#include <memory>

#include "Quackable.hpp"

class QuackCounter : public Quackable {
public:
    explicit QuackCounter(std::shared_ptr<Quackable> duck)
        : duck_{duck} {}

    void quack() override {
        duck_->quack();
        numberOfQuacks_++;
    }

    static size_t getQuacks() {
        return numberOfQuacks_;
    }

    void registerObserver(Observer* observer) override {
        duck_->registerObserver(observer);
    }

    void notifyObservers() override {
        duck_->notifyObservers();
    }

    std::string print() const {
        return duck_->print();
    }

private:
    std::shared_ptr<Quackable> duck_;
    static size_t numberOfQuacks_;
};

size_t QuackCounter::numberOfQuacks_ = 0;
