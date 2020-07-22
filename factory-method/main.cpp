#include <iostream>

#include "ChicagoPizzaStore.hpp"
#include "NYPizzaStore.hpp"

int main() {
    auto nyStore = new NYPizzaStore();
    auto chicagoStore = new ChicagoPizzaStore();

    //Cheese Pizza
    auto pizza = nyStore->orderPizza("cheese");
    std::cout << "Ethan ordered a " << pizza->getName() << '\n';

    std::cout << '\n';
    pizza = chicagoStore->orderPizza("cheese");
    std::cout << "Joel ordered a " << pizza->getName() << '\n';

    //Clam Pizza
    std::cout << '\n';
    pizza = nyStore->orderPizza("clam");
    std::cout << "Ethan ordered a " << pizza->getName() << '\n';

    std::cout << '\n';
    pizza = chicagoStore->orderPizza("clam");
    std::cout << "Joel ordered a " << pizza->getName() << '\n';

    //Pepperoni Pizza
    std::cout << '\n';
    pizza = nyStore->orderPizza("pepperoni");
    std::cout << "Ethan ordered a " << pizza->getName() << '\n';

    std::cout << '\n';
    pizza = chicagoStore->orderPizza("pepperoni");
    std::cout << "Joel ordered a " << pizza->getName() << '\n';

    //Veggie Pizza
    std::cout << '\n';
    pizza = nyStore->orderPizza("veggie");
    std::cout << "Ethan ordered a " << pizza->getName() << '\n';

    pizza = chicagoStore->orderPizza("veggie");
    std::cout << "Joel ordered a " << pizza->getName() << '\n';

    return 0;
}
