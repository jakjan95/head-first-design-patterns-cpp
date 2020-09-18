#include "Waitress.hpp"

#include <iostream>

Waitress::Waitress(std::shared_ptr<Menu> pancakeHouseMenu,
                   std::shared_ptr<Menu> dinerMenu,
                   std::shared_ptr<Menu> cafeMenu)
    : pancakeHouseMenu_{std::move(pancakeHouseMenu)}, dinerMenu_{std::move(dinerMenu)}, cafeMenu_{std::move(cafeMenu)} {}

void Waitress::printMenu() {
    auto pancakeIterator = pancakeHouseMenu_->createIterator();
    auto dinerIterator = dinerMenu_->createIterator();
    auto cafeIterator = cafeMenu_->createIterator();

    std::cout << "Menu\n----\nBREAKFAST\n";
    printMenu(pancakeIterator);
    std::cout << "\nLUNCH\n";
    printMenu(dinerIterator);
    std::cout << "\nDINNER\n";
    printMenu(cafeIterator);
}

void Waitress::printMenu(std::shared_ptr<Iterator> itererator) {
    while (itererator->hasNext()) {
        auto menuItem = itererator->next();
        std::cout << menuItem->getName() << ", "
                  << menuItem->getPrice() << " -- \n"
                  << menuItem->getDescription() << '\n';
    }
}
