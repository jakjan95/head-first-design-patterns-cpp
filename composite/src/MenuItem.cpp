#include "MenuItem.hpp"

#include <iostream>

MenuItem::MenuItem(std::string name,
                   std::string description,
                   bool vegetarian,
                   double price)
    : name_{name},
      description_{description},
      vegetarian_{vegetarian},
      price_{price} {}

std::string MenuItem::getName() const {
    return name_;
}

std::string MenuItem::getDescription() const {
    return description_;
}

double MenuItem::getPrice() const {
    return price_;
}

bool MenuItem::isVegetarian() const {
    return vegetarian_;
}

void MenuItem::print() const {
    std::cout << getName();
    if (isVegetarian()) {
        std::cout << " (vege) ";
    }
    std::cout << ", " << getPrice() << "\n\t-- "
              << getDescription() << '\n';
}
