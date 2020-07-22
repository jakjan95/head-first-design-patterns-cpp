#pragma once

#include "Pizza.hpp"

class NYStylePepperoniPizza : public Pizza {
public:
    NYStylePepperoniPizza() {
        name_ = "NY Style Pepperoni Pizza";
        dough_ = "Thin Crust Dough";
        sauce_ = "Marinara Sauce";
        toppings_.push_back("Grated Reggiano Cheese");
        toppings_.push_back("Mushrooms");
        toppings_.push_back("Onions");
        toppings_.push_back("Red Peppers");
        toppings_.push_back("Pepperoni");


    }
};
