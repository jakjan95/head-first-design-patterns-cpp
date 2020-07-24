#include "NYPizzaStore.hpp"

#include "NYPizzaIngredientFactory.hpp"

#include "CheesePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"

std::shared_ptr<Pizza> NYPizzaStore::createPizza(std::string item) {
    std::shared_ptr<Pizza> pizza = nullptr;
    auto ingredientFactory = std::make_shared<NYPizzaIngredientFactory>();

    if (item == "cheese") {
        pizza = std::make_shared<CheesePizza>(ingredientFactory);
        pizza->setName("NY Cheese Pizza");
    } else if (item == "veggie") {
        pizza = std::make_shared<VeggiePizza>(ingredientFactory);
        pizza->setName("NY Veggie Pizza");
    } else if (item == "clam") {
        pizza = std::make_shared<ClamPizza>(ingredientFactory);
        pizza->setName("NY Clam Pizza");

    } else if (item == "pepperoni") {
        pizza = std::make_shared<PepperoniPizza>(ingredientFactory);
        pizza->setName("NY Pepperoni Pizza");
    }

    return pizza;
}
