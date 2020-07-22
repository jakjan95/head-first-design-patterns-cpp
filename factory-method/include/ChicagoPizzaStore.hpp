#pragma once

#include "PizzaStore.hpp"

class ChicagoPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(std::string item) override;
};
