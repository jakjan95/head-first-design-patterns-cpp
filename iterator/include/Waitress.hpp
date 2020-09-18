#pragma once

#include "Menu.hpp"

class Waitress {
public:
    Waitress(std::shared_ptr<Menu> pancakeHouseMenu,
             std::shared_ptr<Menu> dinerMenu,
             std::shared_ptr<Menu> cafeMenu);

    void printMenu();

    //other methods here

private:
    std::shared_ptr<Menu> pancakeHouseMenu_;
    std::shared_ptr<Menu> dinerMenu_;
    std::shared_ptr<Menu> cafeMenu_;
    void printMenu(std::shared_ptr<Iterator> itererator);
};
