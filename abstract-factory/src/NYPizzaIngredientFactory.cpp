#include "NYPizzaIngredientFactory.hpp"

#include "FreshClams.hpp"
#include "MarinaraSauce.hpp"
#include "ReggianoCheese.hpp"
#include "SlicedPepperoni.hpp"
#include "ThinCrustDough.hpp"

#include "Mushrooms.hpp"
#include "Onions.hpp"
#include "RedPeppers.hpp"

std::shared_ptr<Dough> NYPizzaIngredientFactory::createDough() {
    return std::make_shared<ThinCrustDough>();
}

std::shared_ptr<Sauce> NYPizzaIngredientFactory::createSauce() {
    return std::make_shared<MarinaraSauce>();
}
std::shared_ptr<Cheese> NYPizzaIngredientFactory::createCheese() {
    return std::make_shared<ReggianoCheese>();
}
std::vector<std::shared_ptr<Veggies>> NYPizzaIngredientFactory::createVeggies() {
    std::vector<std::shared_ptr<Veggies>> veggies;
    veggies.push_back(std::make_shared<Onions>());
    veggies.push_back(std::make_shared<Mushrooms>());
    veggies.push_back(std::make_shared<RedPeppers>());
    return veggies;
}

std::shared_ptr<Pepperoni> NYPizzaIngredientFactory::createPepperoni() {
    return std::make_shared<SlicedPepperoni>();
}
std::shared_ptr<Clams> NYPizzaIngredientFactory::createClams() {
    return std::make_shared<FreshClams>();
}
