#pragma once

#include "Pizza.hpp"

class ChicagoStyleVeggiePizza : public Pizza {
public:
    ChicagoStyleVeggiePizza() {
        name_ = "Chicago Style Veggie Pizza";
        dough_ = "Extra Thick Crust Dough";
        sauce_ = "Plum Tomato Sauce";
        toppings_.push_back("Sharedded Mozzarella Cheese");
        toppings_.push_back("Parmesan");
        toppings_.push_back("Eggplant");
        toppings_.push_back("Spinach");
        toppings_.push_back("Black Olives");
    }

};
