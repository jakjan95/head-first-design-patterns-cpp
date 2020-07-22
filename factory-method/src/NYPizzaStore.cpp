#include "NYPizzaStore.hpp"

#include "NYStyleCalmPizza.hpp"
#include "NYStyleCheesePizza.hpp"
#include "NYStylePepperoniPizza.hpp"
#include "NYStyleVeggiePizza.hpp"

std::unique_ptr<Pizza> NYPizzaStore::createPizza(std::string item) {
    std::unique_ptr<Pizza> pizza = nullptr;
    if (item == "cheese") {
        pizza = std::make_unique<NYStyleCheesePizza>();
    } else if (item == "veggie") {
        pizza = std::make_unique<NYStyleVeggiePizza>();
    } else if (item == "clam") {
        pizza = std::make_unique<NYStyleCalmPizza>();
    } else if (item == "pepperoni") {
        pizza = std::make_unique<NYStylePepperoniPizza>();
    }
    return pizza;
}
