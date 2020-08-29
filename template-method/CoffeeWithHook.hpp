#pragma once

#include "CaffeineBeverageWithHook.hpp"

class CoffeeWithHook : public CaffeineBeverageWithHook {
public:
    void brew() override {
        std::cout << "Dripping Coffe through filter\n";
    }

    void addCondiments() {
        std::cout << "Adding Sugar and Milk\n";
    }

    bool customerWantsCondiments() {
        char answer = getUserInput();
        if (answer == 'y') {
            return true;
        }
        return false;
    }

    char getUserInput() {
        char answer;
        std::cout << "Would you like milk and sugar with your coffe (y/n)? ";
        std::cin >> answer;
        return answer;
    }
};
