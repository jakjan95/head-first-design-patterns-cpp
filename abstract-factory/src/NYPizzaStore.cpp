#include "NYPizzaStore.hpp"

#include "NYPizzaIngredientFactory.hpp"

#include "CheesePizza.hpp"
//#include "ClamPizza.hpp"

std::shared_ptr<Pizza> NYPizzaStore::createPizza(std::string item) {
    std::shared_ptr<Pizza> pizza = nullptr;
    auto ingredientFactory = std::make_shared<NYPizzaIngredientFactory>();

    if (item == "cheese") {
        pizza = std::make_shared<CheesePizza>(ingredientFactory);
        pizza->setName("Cheese Pizza");
        // } else if (item == "veggie") {
        //     pizza = std::make_unique<NYStyleVeggiePizza>();
        //} else if (item == "clam") {
        //  pizza = std::make_unique<ClamPizza>(ingredientFactory);
        // } else if (item == "pepperoni") {
        //     pizza = std::make_unique<NYStylePepperoniPizza>();
        //}
    }
    return pizza;
}
