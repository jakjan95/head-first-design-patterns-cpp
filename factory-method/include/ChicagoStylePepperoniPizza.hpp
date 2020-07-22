#pragma once

#include "Pizza.hpp"

#include <iostream>

class ChicagoStylePepperoniPizza : public Pizza {
public:
    ChicagoStylePepperoniPizza() {
        name_ = "Chicago Style Hot Pepperoni Pizza";
        dough_ = "Extra Thick Crust Dough";
        sauce_ = "Plum Tomato Sauce";
        toppings_.push_back("Sharedded Mozzarella Cheese");
        toppings_.push_back("Parmesan");
        toppings_.push_back("Eggplant");
        toppings_.push_back("Spinach");
        toppings_.push_back("Black Olives");
        toppings_.push_back("Pepperoni");
    }

    void cut() {
        std::cout << "Cutting the pizza into square slices\n";
    }
};
