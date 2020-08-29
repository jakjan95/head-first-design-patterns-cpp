#pragma once

#include <iostream>

class CaffeineBeverageWithHook {
public:
    virtual ~CaffeineBeverageWithHook() = default;

    virtual void prepareReceipe() final {
        boilWater();
        brew();
        pourInCup();
        if (customerWantsCondiments()) {
            addCondiments();
        }
    }

    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    void boilWater() {
        std::cout << "Boiling water\n";
    }

    void pourInCup() {
        std::cout << "Pouring into cup\n";
    }

    //in cpp it must be virtual to be able to override and use in derived class
    virtual bool customerWantsCondiments() {
        return true;
    }
};
