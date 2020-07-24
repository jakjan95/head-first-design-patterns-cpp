#include "ChicagoPizzaStore.hpp"

#include "ChicagoPizzaIngredientFactory.hpp"

#include "CheesePizza.hpp"
#include "ClamPizza.hpp"
#include "PepperoniPizza.hpp"
#include "VeggiePizza.hpp"

std::shared_ptr<Pizza> ChicagoPizzaStore::createPizza(const std::string& item) {
    std::shared_ptr<Pizza> pizza = nullptr;
    auto ingredientFactory = std::make_shared<ChicagoPizzaIngredientFactory>();

    if (item == "cheese") {
        pizza = std::make_shared<CheesePizza>(ingredientFactory);
        pizza->setName("Chicago Cheese Pizza");
    } else if (item == "veggie") {
        pizza = std::make_shared<VeggiePizza>(ingredientFactory);
        pizza->setName("Chicago Veggie Pizza");
    } else if (item == "clam") {
        pizza = std::make_shared<ClamPizza>(ingredientFactory);
        pizza->setName("Chicago Clam Pizza");
    } else if (item == "pepperoni") {
        pizza = std::make_shared<PepperoniPizza>(ingredientFactory);
        pizza->setName("Chicago Pepperoni Pizza");
    }

    return pizza;
}
