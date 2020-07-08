#pragma once

#include "Duck.hpp"

class ModelDuck : public Duck {
public:
    ModelDuck();
    void display() const override;
};