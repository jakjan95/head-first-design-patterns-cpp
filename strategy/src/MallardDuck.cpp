#include "MallardDuck.hpp"

#include <iostream>
#include <memory>

#include "FlyWithWings.hpp"
#include "Quack.hpp"

MallardDuck::MallardDuck()
    : Duck(std::make_unique<FlyWithWings>(), std::make_unique<Quack>()) {}

void MallardDuck::display() const {
    std::cout << "I'm real Mallard duck!\n";
}