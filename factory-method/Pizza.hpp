#pragma once

#include <iostream>
#include <string>
#include <vector>

class Pizza {
public:
    virtual void prepare() {
        std::cout << "Preparing " << name_ << "\nTossing dough...\n"
                  << "Adding sauce...\n"
                  << "Adding toppings: ";
        for (const auto& el : toppings_) {
            std::cout << ' ' << el;
        }
        std::cout << '\n';
    }

    virtual void bake() {
        std::cout << "Baking for 15 minutes at 300C\n";
    }

    virtual void cut() {
        std::cout << "Cutting the pizza into diagonal slices\n";
    }

    virtual void box() {
        std::cout << "Place pizza in official PizzaStore box\n";
    }

    std::string getName() {
        return name_;
    }

protected:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;
};
