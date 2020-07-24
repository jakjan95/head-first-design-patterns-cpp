#include "PepperoniPizza.hpp"

#include <iostream>

PepperoniPizza::PepperoniPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
    : ingredientFactory_{std::move(ingredientFactory)} {}

void PepperoniPizza::prepare() {
    std::cout << "Preparing " << name_ << '\n';
    dough_ = ingredientFactory_->createDough();
    sauce_ = ingredientFactory_->createSauce();
    cheese_ = ingredientFactory_->createCheese();
    pepperoni_ = ingredientFactory_->createPepperoni();
    veggies_ = ingredientFactory_->createVeggies();
}
