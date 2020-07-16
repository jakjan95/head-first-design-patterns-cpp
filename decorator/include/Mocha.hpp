#pragma once

#include "CondimentDecorator.hpp"

class Mocha : public CondimentDecorator {
public:
    Mocha(std::unique_ptr<Beverage> beverage);
    std::string getDescritption() const override;
    double cost() const override;
};