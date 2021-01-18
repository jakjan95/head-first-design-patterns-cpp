#pragma once

#include <memory>

#include "Quackable.hpp"

class AbstractDuckFactory {
public:
    virtual ~AbstractDuckFactory() = default;
    
    virtual std::shared_ptr<Quackable> createMallardDuck() = 0;
    virtual std::shared_ptr<Quackable> createRedheadDuck() = 0;
    virtual std::shared_ptr<Quackable> createDuckCall() = 0;
    virtual std::shared_ptr<Quackable> createRubberDuck() = 0;
};
