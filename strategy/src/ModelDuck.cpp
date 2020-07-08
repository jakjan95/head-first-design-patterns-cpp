#include "ModelDuck.hpp"

#include <memory>
#include <iostream>

#include "FlyNoWay.hpp"
#include "Quack.hpp"

ModelDuck::ModelDuck()
    : Duck(std::make_unique<FlyNoWay>(), std::make_unique<Quack>()) {}

void ModelDuck::display() const {
    std::cout << "I'm model duck!\n";
}