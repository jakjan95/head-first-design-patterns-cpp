#include <iostream>

#include "PancakeHouseMenu.hpp"
#include "DinerMenu.hpp"
#include "CafeMenu.hpp"

#include "Waitress.hpp"

int main() {

    auto pancakeHouseMenu = std::make_shared<PancakeHouseMenu>();
    auto dinerMenu = std::make_shared<DinerMenu>();
    auto cafeMenu = std::make_shared<CafeMenu>();

    auto waitress = std::make_unique<Waitress>(pancakeHouseMenu, dinerMenu, cafeMenu);

    waitress->printMenu();
    return 0;
}
