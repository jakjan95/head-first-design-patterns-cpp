#pragma once

#include "PizzaIngredientFactory.hpp"

class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    std::shared_ptr<Dough> createDough() override;
    std::shared_ptr<Sauce> createSauce() override;
    std::shared_ptr<Cheese> createCheese() override;
    std::vector<std::shared_ptr<Veggies>> createVeggies() override;
    std::shared_ptr<Pepperoni> createPepperoni() override;
    std::shared_ptr<Clams> createClams() override;
};
