#pragma once

#include <string>

class Beverage {
public:
    virtual ~Beverage() = default;
    virtual std::string getDescritption() const = 0;
    virtual double cost() const = 0;

protected:
    std::string description_;
};