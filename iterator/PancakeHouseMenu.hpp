#pragma once

#include <memory>
#include <vector>

#include "Menu.hpp"
#include "MenuItem.hpp"
#include "PancakeHouseIterator.hpp"

class PancakeHouseMenu : public Menu {
public:
    PancakeHouseMenu() {
        addItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99);
        addItem("Regular Pancake Breakfast", "Pancakes with fried eggs, susage", false, 2.99);
        addItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
        addItem("Waffles", "waffles, with your choice of bluberries or strawberries", true, 3.59);
    }

    void addItem(std::string name, std::string description, bool vegetarian, double price) {
        menuItems_.push_back(std::make_shared<MenuItem>(name, description, vegetarian, price));
    }

    std::shared_ptr<Iterator> createIterator() override {
        return std::make_shared<PancakeHouseIterator>(menuItems_);
    }

private:
    std::vector<std::shared_ptr<MenuItem>> menuItems_;
};
