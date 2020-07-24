#include "ClamPizza.hpp"

#include <iostream>

ClamPizza::ClamPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
    : ingredientFactory_{std::move(ingredientFactory)} {}

void ClamPizza::prepare() {
    std::cout << "Preparing " << name_ << '\n';
    dough_ = ingredientFactory_->createDough();
    sauce_ = ingredientFactory_->createSauce();
    cheese_ = ingredientFactory_->createCheese();
    clams_ = ingredientFactory_->createClams();
}
