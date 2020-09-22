#include "MenuComponent.hpp"

void MenuComponent::add(std::shared_ptr<MenuComponent> menuComponent) {
    throw std::runtime_error{"Wrong operation\n"};
}

void MenuComponent::remove(std::shared_ptr<MenuComponent> menuComponent) {
    throw std::runtime_error{"Wrong operation\n"};
}
std::shared_ptr<MenuComponent> MenuComponent::getChild(int i) const {
    throw std::runtime_error{"Wrong operation\n"};
}
std::string MenuComponent::getName() const {
    throw std::runtime_error{"Wrong operation\n"};
}
std::string MenuComponent::getDescription() const {
    throw std::runtime_error{"Wrong operation\n"};
}
double MenuComponent::getPrice() const {
    throw std::runtime_error{"Wrong operation\n"};
}
bool MenuComponent::isVegetarian() const {
    throw std::runtime_error{"Wrong operation\n"};
}
void MenuComponent::print() const {
    throw std::runtime_error{"Wrong operation\n"};
}
