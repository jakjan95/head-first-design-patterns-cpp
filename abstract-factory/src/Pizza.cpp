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

std::string Pizza::getName() const {
    return name_;
}

void Pizza::setName(const std::string& name) {
    name_ = name;
}

std::ostream& operator<<(std::ostream& os, const Pizza& p) {
    std::string fullName = p.getName() + ": ";
    if (p.dough_) {
        fullName += p.dough_->toString() + " ";
    }

    if (p.sauce_) {
        fullName += p.sauce_->toString() + " ";
    }

    if (p.cheese_) {
        fullName += p.cheese_->toString() + " ";
    }
    if (p.clams_) {
        fullName += p.clams_->toString() + " ";
    }
    if (p.pepperoni_) {
        fullName += p.pepperoni_->toString() + " ";
    }

    if (!p.veggies_.empty()) {
        for (auto el : p.veggies_) {
            fullName += el->toString() + " ";
        }
    }

    return os << fullName;
}
