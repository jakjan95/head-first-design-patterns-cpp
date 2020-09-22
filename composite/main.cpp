#include <iostream>
#include <memory>

#include "Menu.hpp"
#include "MenuComponent.hpp"
#include "MenuItem.hpp"
#include "Waitress.hpp"

int main() {
    auto pancakeHouseMenu = std::make_shared<Menu>("PANCAKE HOUSE MENU", "Breakfast");
    auto dinerMenu = std::make_shared<Menu>("DINER MENU", "Lunch");
    auto cafeMenu = std::make_shared<Menu>("CAFE MENU", "Dinner");
    auto dessertMenu = std::make_shared<Menu>("DESSERT MENU", "Dessert of course!");

    auto allMenus = std::make_shared<Menu>("ALL MENUS", "All menus combined");

    allMenus->add(pancakeHouseMenu);
    allMenus->add(dinerMenu);
    allMenus->add(cafeMenu);

    dinerMenu->add(std::make_shared<MenuItem>("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99));
    dinerMenu->add(std::make_shared<MenuItem>("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99));
    dinerMenu->add(std::make_shared<MenuItem>("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29));
    dinerMenu->add(std::make_shared<MenuItem>("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05));

    dinerMenu->add(dessertMenu);

    dessertMenu->add(std::make_shared<MenuItem>("Apple Pie", "Apple pie with a flakey crust, topped with vanilla icecream", true, 1.59));

    pancakeHouseMenu->add(std::make_shared<MenuItem>("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99));
    pancakeHouseMenu->add(std::make_shared<MenuItem>("Regular Pancake Breakfast", "Pancakes with fried eggs, susage", false, 2.99));
    pancakeHouseMenu->add(std::make_shared<MenuItem>("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49));
    pancakeHouseMenu->add(std::make_shared<MenuItem>("Waffles", "waffles, with your choice of bluberries or strawberries", true, 3.59));

    cafeMenu->add(std::make_shared<MenuItem>("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99));
    cafeMenu->add(std::make_shared<MenuItem>("Soup of the day", "A cup of the soup of the day, with a side salad", false, 3.69));
    cafeMenu->add(std::make_shared<MenuItem>("Burrito", "A large buritto, with whole pinto beans, salsa, guacamole", true, 4.29));

    auto waitress = std::make_unique<Waitress>(allMenus);
    waitress->printMenu();
    
    return 0;
}
