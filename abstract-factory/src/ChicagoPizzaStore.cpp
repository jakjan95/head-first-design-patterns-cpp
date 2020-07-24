// #include "ChicagoPizzaStore.hpp"

// #include "ChicagoStyleCheesePizza.hpp"
// #include "ChicagoStyleClamPizza.hpp"
// #include "ChicagoStylePepperoniPizza.hpp"
// #include "ChicagoStyleVeggiePizza.hpp"

// std::unique_ptr<Pizza> ChicagoPizzaStore::createPizza(std::string item) {
//     std::unique_ptr<Pizza> pizza = nullptr;
//     if (item == "cheese") {
//         pizza = std::make_unique<ChicagoStyleCheesePizza>();
//     } else if (item == "veggie") {
//         pizza = std::make_unique<ChicagoStyleVeggiePizza>();
//     } else if (item == "clam") {
//         pizza = std::make_unique<ChicagoStyleClamPizza>();
//     } else if (item == "pepperoni") {
//         pizza = std::make_unique<ChicagoStylePepperoniPizza>();
//     }
//     return pizza;
// }
