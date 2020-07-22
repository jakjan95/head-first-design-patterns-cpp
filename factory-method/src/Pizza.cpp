#include "Pizza.hpp"

#include <iostream>

void Pizza::prepare() {
    std::cout << "Preparing " << name_ << "\nTossing dough...\n"
              << "Adding sauce...\n"
              << "Adding toppings: ";
    for (const auto& el : toppings_) {
        std::cout << ' ' << el;
    }
    std::cout << '\n';
}

void Pizza::bake() {
    std::cout << "Baking for 15 minutes at 300C\n";
}

void Pizza::cut() {
    std::cout << "Cutting the pizza into diagonal slices\n";
}

void Pizza::box() {
    std::cout << "Place pizza in official PizzaStore box\n";
}
