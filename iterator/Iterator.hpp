#pragma once

#include <memory>

#include "MenuItem.hpp"

class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual std::shared_ptr<MenuItem> next() = 0;
};
