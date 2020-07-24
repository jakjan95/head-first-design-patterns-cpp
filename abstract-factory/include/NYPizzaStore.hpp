#pragma once

#include "PizzaStore.hpp"

class NYPizzaStore : public PizzaStore {
public:
    std::shared_ptr<Pizza> createPizza(const std::string& item) override;
};
