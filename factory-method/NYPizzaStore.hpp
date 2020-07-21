#pragma once

#include "NYStyleCheesePizza.hpp"
#include "PizzaStore.hpp"

class NYPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(std::string item) override {
        std::unique_ptr<Pizza> pizza = nullptr;
        if (item == "cheese") {
            pizza = std::make_unique<NYStyleCheesePizza>();
        }
        return pizza;
    }
};
