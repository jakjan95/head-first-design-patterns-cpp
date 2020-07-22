#pragma once

#include "Pizza.hpp"

class ChicagoStyleClamPizza : public Pizza {
public:
    ChicagoStyleClamPizza() {
        name_ = "Chicago Style Clam Pizza";
        dough_ = "Extra Thick Crust Dough";
        sauce_ = "Plum Tomato Sauce";
        toppings_.push_back("Sharedded Mozzarella Cheese");
        toppings_.push_back("Parmesan");
        toppings_.push_back("Clams");
    }

};
