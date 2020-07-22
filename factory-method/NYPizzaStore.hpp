#pragma once

#include "NYStyleCalmPizza.hpp"
#include "NYStyleCheesePizza.hpp"
#include "NYStylePepperoniPizza.hpp"
#include "NYStyleVeggiePizza.hpp"
#include "PizzaStore.hpp"

class NYPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(std::string item) override {
        std::unique_ptr<Pizza> pizza = nullptr;
        if (item == "cheese") {
            pizza = std::make_unique<NYStyleCheesePizza>();
        } else if (item == "veggie") {
            pizza = std::make_unique<NYStyleVeggiePizza>();
        } else if (item == "clam") {
            pizza = std::make_unique<NYStyleCalmPizza>();
        } else if (item == "pepperoni") {
            pizza = std::make_unique<NYStylePepperoniPizza>();
        }
        return pizza;
    }
};
