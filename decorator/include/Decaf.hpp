#pragma once

#include "Beverage.hpp"

class Decaf : public Beverage {
public:
    std::string getDescritption() const override {
        return "Coffe without coffeine";
    }
    double cost() const override {
        return 1.05;
    }
};