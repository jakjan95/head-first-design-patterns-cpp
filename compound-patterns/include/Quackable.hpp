#pragma once

#include <iostream>

#include "QuackObservable.hpp"

class Quackable : public QuackObservable {
public:
    virtual ~Quackable() = default;

    virtual void quack() = 0;
    virtual std::string print() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Quackable& quackable) {
        os << quackable.print();
        return os;
    }
};
