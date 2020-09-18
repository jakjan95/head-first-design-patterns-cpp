#pragma once
#include <string>
class MenuItem {
public:
    MenuItem(std::string name,
             std::string description,
             bool vegetarian,
             double price)
        : name_{name},
          description_{description},
          vegetarian_{vegetarian},
          price_{price} {}

    std::string getName() const {
        return name_;
    }

    std::string getDescription() const {
        return description_;
    }

    double getPrice() const {
        return price_;
    }

    bool isVegetarian() const {
        return vegetarian_;
    }

private:
    std::string name_;
    std::string description_;
    bool vegetarian_;
    double price_;
};
