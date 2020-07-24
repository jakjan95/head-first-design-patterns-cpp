#pragma once

#include <string>

class Cheese {
public:
    virtual ~Cheese() = default;
    virtual std::string toString() = 0;
};
