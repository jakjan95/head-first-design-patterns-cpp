#pragma once

#include "PizzaIngredientFactory.hpp"

#include "MarinaraSauce.hpp"
#include "ReggianoCheese.hpp"
#include "ThinCrustDough.hpp"

// class Gralic;
// class Onion;
// class Mushroom;
// class RedPepper;
// class SlicedPepperoni;
// class FreshClams;

class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:

    std::shared_ptr<Dough> createDough() override{
        return std::make_shared<ThinCrustDough>();
    }

    std::shared_ptr<Sauce> createSauce() override{
        return std::make_shared<MarinaraSauce>();
    }
    std::shared_ptr<Cheese> createCheese() override{
        return std::make_shared<ReggianoCheese>();
    }
    //std::vector<std::unique_ptr<Veggies>> createVeggies();
    //std::unique_ptr<Pepperoni> createPepperoni();
    //std::unique_ptr<Clams> createClams();
};
