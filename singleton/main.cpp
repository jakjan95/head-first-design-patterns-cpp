#include <iostream>

#include "ChocolateBoiler.hpp"

int main() {
    ChocolateBoiler* boiler = ChocolateBoiler::getInstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();
    return 0;
}
