#include "Menu.hpp"

#include <algorithm>
#include <iostream>

Menu::Menu(std::string name, std::string description)
    : name_{name}, description_{description} {}

void Menu::add(std::shared_ptr<MenuComponent> menuComponent) {
    menuComponents_.emplace_back(menuComponent);
}

void Menu::remove(std::shared_ptr<MenuComponent> menuComponent) {
    menuComponents_.erase(std::remove(menuComponents_.begin(), menuComponents_.end(), menuComponent), menuComponents_.end());
}

std::shared_ptr<MenuComponent> Menu::getChild(int i) const {
    return menuComponents_[i];
}

std::string Menu::getName() const {
    return name_;
}

std::string Menu::getDescription() const {
    return description_;
}

void Menu::print() const {
    std::cout << "\n"
              << getName()
              << ", " << getDescription() << '\n'
              << std::string(10, '-') << '\n';

    for (const auto& el : menuComponents_) {
        //instead of using iterator
        el->print();
    }
}
