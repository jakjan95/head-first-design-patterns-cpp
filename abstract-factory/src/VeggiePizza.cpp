#include "VeggiePizza.hpp"

#include <iostream>

VeggiePizza::VeggiePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
    : ingredientFactory_{std::move(ingredientFactory)} {}

void VeggiePizza::prepare() {
    std::cout << "Preparing " << name_ << '\n';
    dough_ = ingredientFactory_->createDough();
    sauce_ = ingredientFactory_->createSauce();
    cheese_ = ingredientFactory_->createCheese();
    veggies_ = ingredientFactory_->createVeggies();
}
