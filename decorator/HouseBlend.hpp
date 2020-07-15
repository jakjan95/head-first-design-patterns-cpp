#pragma once

#include "Beverage.hpp"

class HouseBlend : public Beverage {
public:
    std::string getDescritption() const override {
        return "House Blend Coffe";
    }
    double cost() const override {
        return 0.89;
    }
};