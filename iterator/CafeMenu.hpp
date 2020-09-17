#pragma once

#include <memory>
#include <unordered_map>

#include "Menu.hpp"
#include "MenuItem.hpp"
#include "CafeMenuIterator.hpp"

class CafeMenu : public Menu {
public:
    CafeMenu() {
        addItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99);
        addItem("Soup of the day", "A cup of the soup of the day, with a side salad", false, 3.69);
        addItem("Burrito", "A large buritto, with whole pinto beans, salsa, guacamole", true, 4.29);
    }

    void addItem(std::string name, std::string description, bool vegetarian, double price) {
        menuItems_.insert({name, std::make_shared<MenuItem>(name, description, vegetarian, price)});
    }

        std::shared_ptr<Iterator> createIterator() override {
        return std::make_shared<CafeMenuIterator>(menuItems_);
    }

private:
    std::unordered_map<std::string, std::shared_ptr<MenuItem>> menuItems_;
};
