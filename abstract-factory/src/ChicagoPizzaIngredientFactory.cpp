#include "ChicagoPizzaIngredientFactory.hpp"

#include "FrozenClams.hpp"
#include "MozzarellaCheese.hpp"
#include "PlumTomatoSauce.hpp"
#include "SlicedPepperoni.hpp"
#include "ThickCrustDough.hpp"

#include "BlackOlives.hpp"
#include "Eggplant.hpp"
#include "Spinach.hpp"

std::shared_ptr<Dough> ChicagoPizzaIngredientFactory::createDough() {
    return std::make_shared<ThickCrustDough>();
}

std::shared_ptr<Sauce> ChicagoPizzaIngredientFactory::createSauce() {
    return std::make_shared<PlumTomatoSauce>();
}
std::shared_ptr<Cheese> ChicagoPizzaIngredientFactory::createCheese() {
    return std::make_shared<MozzarellaCheese>();
}
std::vector<std::shared_ptr<Veggies>> ChicagoPizzaIngredientFactory::createVeggies() {
    std::vector<std::shared_ptr<Veggies>> veggies;
    veggies.push_back(std::make_shared<BlackOlives>());
    veggies.push_back(std::make_shared<Eggplant>());
    veggies.push_back(std::make_shared<Spinach>());
    return veggies;
}

std::shared_ptr<Pepperoni> ChicagoPizzaIngredientFactory::createPepperoni() {
    return std::make_shared<SlicedPepperoni>();
}
std::shared_ptr<Clams> ChicagoPizzaIngredientFactory::createClams() {
    return std::make_shared<FrozenClams>();
}
