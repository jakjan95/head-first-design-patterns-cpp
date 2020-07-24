#pragma once

#include <string>

class Pepperoni {
public:
    virtual ~Pepperoni() = default;
    virtual std::string toString() = 0;
};
