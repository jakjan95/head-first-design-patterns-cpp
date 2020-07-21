#pragma once

#include "Pizza.hpp"

class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        name_ = "Chicago Style Deep Dish Cheese Pizza";
        dough_ = "Extra Thick Crust Dough";
        sauce_ = "Plum Tomato Sauce";
        toppings_.push_back("Sharedded Mozzarella Cheese");
    }

    void cut() {
        std::cout << "Cutting the pizza into square slices\n";
    }
};
