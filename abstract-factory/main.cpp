#include <iostream>

#include "ChicagoPizzaStore.hpp"
#include "NYPizzaStore.hpp"

int main() {
    std::unique_ptr<PizzaStore> nyStore = std::make_unique<NYPizzaStore>();
    std::unique_ptr<PizzaStore> chicagoStore = std::make_unique<ChicagoPizzaStore>();

    //Cheese Pizza
    auto pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << *pizza << '\n';

    pizza = chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered a " << *pizza << '\n';

    // //Clam Pizza
    std::cout << '\n';
    pizza = nyStore->orderPizza("clam");
    std::cout << "Ethan ordered a " << *pizza << '\n';

    pizza = chicagoStore->orderPizza("clam");
    std::cout << "Joel ordered a " << *pizza << '\n';

    //Pepperoni Pizza
    std::cout << '\n';
    pizza = nyStore->orderPizza("pepperoni");
    std::cout << "Ethan ordered a " << *pizza << '\n';

    pizza = chicagoStore->orderPizza("pepperoni");
    std::cout << "Joel ordered a " << *pizza << '\n';

    //Veggie Pizza
    std::cout << '\n';
    pizza = nyStore->orderPizza("veggie");
    std::cout << "Ethan ordered a " << *pizza << '\n';

    pizza = chicagoStore->orderPizza("veggie");
    std::cout << "Joel ordered a " << *pizza << '\n';

    return 0;
}
