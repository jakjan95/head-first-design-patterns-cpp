#include <iostream>

#include "ChicagoPizzaStore.hpp"
#include "NYPizzaStore.hpp"

int main() {
    auto nyStore = new NYPizzaStore();
    auto pizza = nyStore->orderPizza("cheese");

    std::cout << "Ethan ordered a " << pizza->getName() << '\n';

    std::cout<<'\n';
    auto chicagoStore = new ChicagoPizzaStore();
    pizza = chicagoStore->orderPizza("cheese");

    std::cout << "Joel ordered a " << pizza->getName() << '\n';
    return 0;
}
