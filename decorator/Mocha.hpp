#pragma once

#include "CondimentDecorator.hpp"

class Mocha : public CondimentDecorator {
public:
    Mocha(std::unique_ptr<Beverage> beverage)
        : CondimentDecorator(std::move(beverage)) {}

    std::string getDescritption() const override {
        return beverage_->getDescritption() + ", Mocha";
    }

    double cost() const override {
        return 0.20 + beverage_->cost();
    }

private:
};