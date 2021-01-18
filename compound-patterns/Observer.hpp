#pragma once

#include <memory>

#include "QuackObservable.hpp"

class Observer {
public:
    virtual ~Observer() = default;
    
    virtual void update(QuackObservable* duck) = 0;
};
