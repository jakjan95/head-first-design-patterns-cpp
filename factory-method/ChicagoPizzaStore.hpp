#pragma once

#include "ChicagoStyleCheesePizza.hpp"
#include "PizzaStore.hpp"

class ChicagoPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(std::string item) override {
        std::unique_ptr<Pizza> pizza = nullptr;
        if (item == "cheese") {
            pizza = std::make_unique<ChicagoStyleCheesePizza>();
        }
        return pizza;
    }
};
