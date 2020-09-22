#pragma once

#include "MenuComponent.hpp"

class Waitress {
public:
    explicit Waitress(std::shared_ptr<MenuComponent> allMenus);
    void printMenu();

private:
    std::shared_ptr<MenuComponent> allMenus_;
};
