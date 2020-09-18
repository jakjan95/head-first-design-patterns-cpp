#pragma once

#include <memory>
#include <unordered_map>

#include "CafeMenuIterator.hpp"
#include "Menu.hpp"
#include "MenuItem.hpp"

class CafeMenu : public Menu {
public:
    CafeMenu();

    void addItem(std::string name, std::string description, bool vegetarian, double price);
    std::shared_ptr<Iterator> createIterator() override;

private:
    std::unordered_map<std::string, std::shared_ptr<MenuItem>> menuItems_;
};
