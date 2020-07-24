#include "PizzaStore.hpp"

#include <iostream>

std::shared_ptr<Pizza> PizzaStore::orderPizza(const std::string& type) {
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
