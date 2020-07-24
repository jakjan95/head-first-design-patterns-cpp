#pragma once

#include <memory>
#include <vector>

#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "Pepperoni.hpp"
#include "Sauce.hpp"
#include "Veggies.hpp"

class PizzaIngredientFactory {
public:
    virtual ~PizzaIngredientFactory() = default;
    virtual std::shared_ptr<Dough> createDough() = 0;
    virtual std::shared_ptr<Sauce> createSauce() = 0;
    virtual std::shared_ptr<Cheese> createCheese() = 0;
    virtual std::vector<std::shared_ptr<Veggies>> createVeggies() = 0;
    virtual std::shared_ptr<Pepperoni> createPepperoni() = 0;
    virtual std::shared_ptr<Clams> createClams() = 0;
};
