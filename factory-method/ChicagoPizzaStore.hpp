#pragma once

#include "ChicagoStyleCheesePizza.hpp"
#include "ChicagoStyleClamPizza.hpp"
#include "ChicagoStylePepperoniPizza.hpp"
#include "ChicagoStyleVeggiePizza.hpp"
#include "PizzaStore.hpp"

class ChicagoPizzaStore : public PizzaStore {
public:
    std::unique_ptr<Pizza> createPizza(std::string item) override {
        std::unique_ptr<Pizza> pizza = nullptr;
        if (item == "cheese") {
            pizza = std::make_unique<ChicagoStyleCheesePizza>();
        } else if (item == "veggie") {
            pizza = std::make_unique<ChicagoStyleVeggiePizza>();
        } else if (item == "clam") {
            pizza = std::make_unique<ChicagoStyleClamPizza>();
        } else if (item == "pepperoni") {
            pizza = std::make_unique<ChicagoStylePepperoniPizza>();
        }
        return pizza;
    }
};
