#pragma once

#include "PizzaStore.hpp"

class NYPizzaStore : public PizzaStore {
public:
    std::shared_ptr<Pizza> createPizza(std::string item) override;
};
