#pragma once

#include <memory>
//#include <vector>

#include "Dough.hpp"
#include "Sauce.hpp"
#include "Cheese.hpp"

// class Veggies;
// class Pepperoni;
// class Clams;

class PizzaIngredientFactory {
public:
    virtual ~PizzaIngredientFactory() = default;
    virtual std::shared_ptr<Dough> createDough() = 0;
    virtual std::shared_ptr<Sauce> createSauce() = 0;
    virtual std::shared_ptr<Cheese> createCheese() = 0;

    // virtual std::vector<std::unique_ptr<Veggies>> createVeggies() = 0;
    // virtual std::unique_ptr<Pepperoni> createPepperoni() = 0;
    // virtual std::unique_ptr<Clams> createClams() = 0;
};
