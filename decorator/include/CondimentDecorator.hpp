#pragma once
#include <memory>

#include "Beverage.hpp"

class CondimentDecorator : public Beverage {
public:
    CondimentDecorator(std::unique_ptr<Beverage> beverage)
        : beverage_(std::move(beverage)) {}

protected:
    std::unique_ptr<Beverage> beverage_;
};