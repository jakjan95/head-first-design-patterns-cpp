#pragma once

#include "CondimentDecorator.hpp"

class Soy : public CondimentDecorator {
public:
    Soy(std::unique_ptr<Beverage> beverage);
    std::string getDescritption() const override;
    double cost() const override;
};