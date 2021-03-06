#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class CheesePizza : public Pizza {
public:
    explicit CheesePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory);
    void prepare() override;

private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;
};
