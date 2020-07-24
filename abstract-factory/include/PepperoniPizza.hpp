#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class PepperoniPizza : public Pizza {
public:
    explicit PepperoniPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory);
    void prepare() override;

private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;
};
