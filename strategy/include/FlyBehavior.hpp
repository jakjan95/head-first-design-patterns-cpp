#pragma once

class FlyBehavior {
public:
    virtual void fly() const = 0;
    virtual ~FlyBehavior() = default;
};