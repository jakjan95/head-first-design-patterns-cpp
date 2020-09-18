#pragma once

#include <memory>

#include "Iterator.hpp"

class Menu {
public:
    virtual std::shared_ptr<Iterator> createIterator() = 0;
};
