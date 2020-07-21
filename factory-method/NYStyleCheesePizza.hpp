#pragma once

#include "Pizza.hpp"

class NYStyleCheesePizza : public Pizza {
public:
    NYStyleCheesePizza() {
        name_ = "Ny Style Sauce and Cheese Pizza";
        dough_ = "Thin Crust Dough";
        sauce_ = "Marinara Sauce";
        toppings_.push_back("Grated Reggiano Cheese");
    }
};
