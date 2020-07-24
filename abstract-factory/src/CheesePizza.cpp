#include "CheesePizza.hpp"

#include <iostream>

CheesePizza::CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
    : ingredientFactory_{std::move(ingredientFactory)} {}

void CheesePizza::prepare() {
    std::cout << "Preparing " << name_ << '\n';
    dough_ = ingredientFactory_->createDough();
    sauce_ = ingredientFactory_->createSauce();
    cheese_ = ingredientFactory_->createCheese();
}
