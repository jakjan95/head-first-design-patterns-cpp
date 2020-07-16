#pragma once

#include "CondimentDecorator.hpp"

class Milk : public CondimentDecorator {
public:
    Milk(std::unique_ptr<Beverage> beverage);
    std::string getDescritption() const override;
    double cost() const override;
};