#pragma once

#include <memory>

#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

class Duck {
public:
    Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior);
    virtual ~Duck() = default;

    virtual void display() const = 0;

    void performFly();
    void performQuack();
    void swim();

    void setFlyBehavior(std::unique_ptr<FlyBehavior> li);
    void setQuackBehavior(std::unique_ptr<QuackBehavior> li);

protected:
    std::unique_ptr<FlyBehavior> flyBehavior_;
    std::unique_ptr<QuackBehavior> quackBehavior_;
};