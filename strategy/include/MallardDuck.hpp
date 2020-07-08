#pragma once

#include "Duck.hpp"

class MallardDuck : public Duck {
public:
    MallardDuck();
    void display() const override;
};