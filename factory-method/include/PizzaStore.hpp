#pragma once

#include <memory>

#include "Pizza.hpp"

class PizzaStore {
public:
    std::unique_ptr<Pizza> orderPizza(std::string type);
    virtual std::unique_ptr<Pizza> createPizza(std::string type) = 0;

    //other methods here
};
