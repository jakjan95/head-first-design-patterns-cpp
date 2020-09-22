#include "Waitress.hpp"

Waitress::Waitress(std::shared_ptr<MenuComponent> allMenus)
    : allMenus_{allMenus} {}

void Waitress::printMenu() {
    allMenus_->print();
}
