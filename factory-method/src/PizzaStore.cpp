#include "PizzaStore.hpp"

#include <iostream>

std::unique_ptr<Pizza> PizzaStore::orderPizza(std::string type) {
    auto pizza = createPizza(type);

    if (pizza) {
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
    } else {
        std::cout << "Entered pizza is wrong\n";
    }

    return pizza;
}
