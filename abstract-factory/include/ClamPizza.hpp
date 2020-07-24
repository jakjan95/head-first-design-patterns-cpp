// #pragma once

// #include <iostream>

// #include "Pizza.hpp"
// #include "PizzaIngredientFactory.hpp"

// class ClamPizza : public Pizza {
// public:
//     explicit ClamPizza(std::unique_ptr<PizzaIgredientFactory> ingredientFactory)
//         : ingredientFactory_{std::move(ingredientFactory)} {}

//     void prepare() override {
//         std::cout << "Preparing " << name_;
//         dough_ = ingredientFactory_->createDough();
//         sauce_ = ingredientFactory_->createSauce();
//         cheese_ = ingredientFactory_->createCheese();
//         //clams_ = ingredientFactory_->c
//     }

// private:
//     std::unique_ptr<PizzaIgredientFactory> ingredientFactory_;
// };
