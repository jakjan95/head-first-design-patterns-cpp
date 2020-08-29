#pragma once

#include "CaffeineBeverageWithHook.hpp"

class TeaWithHook : public CaffeineBeverageWithHook {
public:
    void brew() override {
        std::cout << "Steeping the tea\n";
    }

    void addCondiments() {
        std::cout << "Adding Lemon\n";
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
        std::cout << "Would you like lemon with your tea (y/n)? ";
        std::cin >> answer;
        return answer;
    }
};
