#pragma once

#include "Beverage.hpp"

class DarkRoast : public Beverage {
public:
    std::string getDescritption() const override {
        return "Dark Roast";
    }
    double cost() const override {
        return 0.99;
    }
};