#include <iostream>

#include "MallardDuck.hpp"
#include "ModelDuck.hpp"

#include "DuckCall.hpp"

#include "FlyNoWay.hpp"
#include "FlyRocketPowered.hpp"

int main() {
    MallardDuck mallard;
    mallard.display();
    mallard.performQuack();
    mallard.performFly();
    mallard.swim();

    mallard.setFlyBehavior(std::make_unique<FlyNoWay>());
    mallard.performFly();

    std::cout << std::string(20, '*') << '\n';

    ModelDuck model;
    model.display();
    model.performQuack();
    model.performFly();
    model.swim();

    model.setFlyBehavior(std::make_unique<FlyRocketPowered>());
    model.performFly();

    std::cout << std::string(20, '*') << '\n';
    DuckCall duckCall;
    duckCall.performQuack();

    return 0;
}