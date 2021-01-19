#pragma once

#include <iostream>
#include <memory>

#include "Observer.hpp"
#include "QuackObservable.hpp"

class Quackologist : public Observer {
public:
    void update(QuackObservable* duck) {
        std::cout << "Quackologist: " << *dynamic_cast<Quackable*>(duck) << " just quacked\n";
    }
};
