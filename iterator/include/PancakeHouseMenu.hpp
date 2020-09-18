#pragma once

#include <memory>
#include <vector>

#include "Menu.hpp"
#include "MenuItem.hpp"
#include "PancakeHouseIterator.hpp"

class PancakeHouseMenu : public Menu {
public:
    PancakeHouseMenu();

    void addItem(std::string name, std::string description, bool vegetarian, double price);
    std::shared_ptr<Iterator> createIterator() override;

private:
    std::vector<std::shared_ptr<MenuItem>> menuItems_;
};
