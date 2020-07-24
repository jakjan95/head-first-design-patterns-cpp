#pragma once

#include <memory>

#include "Pizza.hpp"

class PizzaStore {
public:
    virtual ~PizzaStore() = default;
    std::shared_ptr<Pizza> orderPizza(std::string type);
    virtual std::shared_ptr<Pizza> createPizza(std::string type) = 0;

    //other methods here
};
