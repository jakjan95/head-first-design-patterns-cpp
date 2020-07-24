#include "Pizza.hpp"

#include <iostream>


void Pizza::bake() {
    std::cout << "Baking for 15 minutes at 300C\n";
}

void Pizza::cut() {
    std::cout << "Cutting the pizza into diagonal slices\n";
}

void Pizza::box() {
    std::cout << "Place pizza in official PizzaStore box\n";
}
