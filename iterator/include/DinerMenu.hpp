#pragma once

#include <array>
#include <memory>

#include "DinerMenuIterator.hpp"
#include "Menu.hpp"
#include "MenuItem.hpp"

class DinerMenu : public Menu {
public:
    DinerMenu();

    void addItem(std::string name, std::string description, bool vegetarian, double price);
    std::shared_ptr<Iterator> createIterator() override;

private:
    std::array<std::shared_ptr<MenuItem>, 6> menuItems_;
    int numberOfItems_ = 0;
};
