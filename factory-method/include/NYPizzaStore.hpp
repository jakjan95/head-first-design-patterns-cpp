#pragma once

#include "PizzaStore.hpp"

class NYPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(std::string item) override;
};
