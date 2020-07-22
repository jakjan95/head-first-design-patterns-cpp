#pragma once

#include "Pizza.hpp"

class NYStyleVeggiePizza : public Pizza {
public:
    NYStyleVeggiePizza() {
        name_ = "NY Style Veggie Pizza";
        dough_ = "Thin Crust Dough";
        sauce_ = "Marinara Sauce";
        toppings_.push_back("Grated Reggiano Cheese");
        toppings_.push_back("Mushrooms");
        toppings_.push_back("Onions");
        toppings_.push_back("Red Peppers");
    }
};
