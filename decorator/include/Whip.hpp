#pragma once

#include "CondimentDecorator.hpp"

class Whip : public CondimentDecorator {
public:
    Whip(std::unique_ptr<Beverage> beverage);
    std::string getDescritption() const override;
    double cost() const override;
};