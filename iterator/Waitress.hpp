#pragma once

#include "Menu.hpp"

class Waitress {
public:
    Waitress(std::shared_ptr<Menu> pancakeHouseMenu,
             std::shared_ptr<Menu> dinerMenu)
        : pancakeHouseMenu_{std::move(pancakeHouseMenu)}, dinerMenu_{std::move(dinerMenu)} {}

    void printMenu() {
        auto pancakeIterator = pancakeHouseMenu_->createIterator();
        auto dinerIterator = dinerMenu_->createIterator();
        std::cout << "Menu\n----\nBREAKFAST\n";
        printMenu(pancakeIterator);
        std::cout << "\nLUNCH\n";
        printMenu(dinerIterator);
    }

    //other methods here

private:
    std::shared_ptr<Menu> pancakeHouseMenu_;
    std::shared_ptr<Menu> dinerMenu_;

    void printMenu(std::shared_ptr<Iterator> itererator) {
        while (itererator->hasNext()) {
            auto menuItem = itererator->next();
            std::cout << menuItem->getName() << ", "
                      << menuItem->getPrice() << " -- \n"
                      << menuItem->getDescription() << '\n';
        }
    }
};
