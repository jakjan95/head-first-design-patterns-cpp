#include <iostream>
#include <memory>

#include "CaffeineBeverageWithHook.hpp"
#include "CoffeeWithHook.hpp"
#include "TeaWithHook.hpp"

int main() {
    auto teaHook = std::make_shared<TeaWithHook>();
    auto coffeHook = std::make_shared<CoffeeWithHook>();

    std::cout << "\nMaking tea...\n";
    teaHook->prepareReceipe();

    std::cout << "\nMaking coffee...\n";
    coffeHook->prepareReceipe();

    return 0;
}
