#pragma once

#include "Pizza.hpp"
#include "PizzaIngredientFactory.hpp"

class VeggiePizza : public Pizza {
public:
    explicit VeggiePizza(std::shared_ptr<PizzaIngredientFactory> ingredientFactory);
    void prepare() override;

private:
    std::shared_ptr<PizzaIngredientFactory> ingredientFactory_;
};
