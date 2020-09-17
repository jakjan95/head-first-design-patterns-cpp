#include <iostream>

#include "PancakeHouseMenu.hpp"
#include "DinerMenu.hpp"

#include "Waitress.hpp"

int main() {

    auto pancakeHouseMenu = std::make_shared<PancakeHouseMenu>();
    auto dinerMenu = std::make_shared<DinerMenu>();
    auto waitress = std::make_unique<Waitress>(pancakeHouseMenu, dinerMenu);

    waitress->printMenu();
    return 0;
}
