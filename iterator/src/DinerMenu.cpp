#include "DinerMenu.hpp"

#include <iostream>

DinerMenu::DinerMenu() {
    addItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
    addItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
    addItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
    addItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05);
    //a couple of other Diner Menu items added here
}

void DinerMenu::addItem(std::string name, std::string description, bool vegetarian, double price) {
    if (numberOfItems_ > menuItems_.size()) {
        std::cout << "Sorry, menu is full! Can't add item to menu\n";
    } else {
        menuItems_[numberOfItems_] = std::make_shared<MenuItem>(name, description, vegetarian, price);
        numberOfItems_++;
    }
}

std::shared_ptr<Iterator> DinerMenu::createIterator() {
    return std::make_shared<DinerMenuIterator>(menuItems_);
}
