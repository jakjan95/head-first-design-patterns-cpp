#pragma once

#include "FlyBehavior.hpp"

class FlyRocketPowered : public FlyBehavior {
public:
    void fly() const override;
};