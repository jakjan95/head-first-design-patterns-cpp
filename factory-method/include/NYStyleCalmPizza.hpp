#pragma once

#include "Pizza.hpp"

class NYStyleCalmPizza : public Pizza {
public:
    NYStyleCalmPizza() {
        name_ = "NY Style Calm Pizza";
        dough_ = "Thin Crust Dough";
        sauce_ = "Marinara Sauce";
        toppings_.push_back("Grated Reggiano Cheese");
        toppings_.push_back("Fresh Clams");
    }
};
