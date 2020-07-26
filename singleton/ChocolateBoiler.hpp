#pragma once

#include <iostream>

class ChocolateBoiler {
public:
    //Singletons should not be cloneable.
    ChocolateBoiler(ChocolateBoiler& other) = delete;

    //Singletons should not be assignable.
    void operator=(const ChocolateBoiler&) = delete;

    static ChocolateBoiler* getInstance();

    void fill() {
        if (isEmpty()) {
            std::cout << "Filling a boiler\n";
            empty_ = false;
            boiled_ = false;
        }
    }

    void drain() {
        if (!isEmpty() && isBoiled()) {
            std::cout << "Draining a boiler\n";
            empty_ = true;
        }
    }

    void boil() {
        if (!isEmpty() && !isBoiled()) {
            std::cout << "Boiling mixture\n";

            boiled_ = true;
        }
    }

    bool isEmpty() const {
        return empty_;
    }

    bool isBoiled() const {
        return boiled_;
    }

protected:
    bool empty_;
    bool boiled_;
    static ChocolateBoiler* uniqueInstance_;

    ChocolateBoiler()
        : empty_{true}, boiled_{false} {}

    ~ChocolateBoiler() {
        uniqueInstance_ = nullptr;
    }
};


ChocolateBoiler* ChocolateBoiler::uniqueInstance_ = nullptr;;

//Static methods should be outside of class
ChocolateBoiler* ChocolateBoiler::getInstance() {
    if (!uniqueInstance_) {
        std::cout << "Creating unique instance of ChocolateBoiler\n";
        uniqueInstance_ = new ChocolateBoiler();
    }
    std::cout << "Returning unique instance of ChocolateBoiler\n";
    return uniqueInstance_;
}
