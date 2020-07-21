#pragma once

#include <memory>
#include <string>

#include "Pizza.hpp"

class PizzaStore {
public:
    std::unique_ptr<Pizza> orderPizza(std::string type) {
        auto pizza = createPizza(type);

        if (pizza) {
            pizza->prepare();
            pizza->bake();
            pizza->cut();
            pizza->box();
        } else {
            std::cout << "wrong pizza\n";
        }

        return pizza;
    }

    virtual std::unique_ptr<Pizza> createPizza(std::string type) = 0;

    //other methods here
};
