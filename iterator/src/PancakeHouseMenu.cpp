#include "PancakeHouseMenu.hpp"

PancakeHouseMenu::PancakeHouseMenu() {
    addItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99);
    addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, susage", false, 2.99);
    addItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
    addItem("Waffles", "waffles, with your choice of bluberries or strawberries", true, 3.59);
}

void PancakeHouseMenu::addItem(std::string name, std::string description, bool vegetarian, double price) {
    menuItems_.emplace_back(std::make_shared<MenuItem>(name, description, vegetarian, price));
}

std::shared_ptr<Iterator> PancakeHouseMenu::createIterator() {
    return std::make_shared<PancakeHouseIterator>(menuItems_);
}
