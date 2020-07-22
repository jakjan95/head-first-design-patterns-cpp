#pragma once

#include "Pizza.hpp"

#include <iostream>

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        name_ = "Chicago Style Deep Dish Cheese Pizza";
        dough_ = "Extra Thick Crust Dough";
        sauce_ = "Plum Tomato Sauce";
        toppings_.push_back("Sharedded Mozzarella Cheese");
        toppings_.push_back("Parmesan");
        toppings_.push_back("Oregano");
    }

    void cut() {
        std::cout << "Cutting the pizza into square slices\n";
    }
};
