#pragma once

#include <string>

#include "MenuComponent.hpp"

class MenuItem : public MenuComponent {
public:
    MenuItem(std::string name, std::string description, bool vegetarian, double price);
    std::string getName() const override;
    std::string getDescription() const override;
    double getPrice() const override;
    bool isVegetarian() const override;
    void print() const override;

private:
    std::string name_;
    std::string description_;
    bool vegetarian_;
    double price_;
};
