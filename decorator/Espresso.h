#pragma once

#include "Beverage.hpp"

class Espresso : public Beverage {
public:
    std::string getDescritption() const override {
        return "Espresso";
    }
    double cost() const override {
        return 1.99;
    }
};