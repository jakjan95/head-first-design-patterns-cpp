#pragma once

#include <iostream>

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class CheesePizza : public Pizza {
public:
    explicit CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory)
        : ingredientFactory_{std::move(ingredientFactory)} {}
    //~CheesePizza() = default;

    void prepare() override {
        std::cout << "Preparing " << name_;
        dough_ = ingredientFactory_->createDough();
        sauce_ = ingredientFactory_->createSauce();
        cheese_ = ingredientFactory_->createCheese();
    }

private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;
};
