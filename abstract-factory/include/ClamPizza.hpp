#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class ClamPizza : public Pizza {
public:
    explicit ClamPizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory);
    void prepare() override;

private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;
};
