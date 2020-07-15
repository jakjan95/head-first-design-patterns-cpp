#include <iostream>
#include <memory>

#include "Espresso.h"
#include "Mocha.hpp"

int main() {
    Espresso espresso;
    std::cout << espresso.getDescritption() << " $" << espresso.cost() << '\n';

    std::unique_ptr<Beverage> espressoWithMocha = std::make_unique<Espresso>();
    espressoWithMocha = std::make_unique<Mocha>(std::move(espressoWithMocha));
    std::cout << espressoWithMocha->getDescritption() << " $" << espressoWithMocha->cost() << '\n';
    return 0;
}