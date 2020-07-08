#include "Duck.hpp"

#include <iostream>

Duck::Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior)
    : flyBehavior_{std::move(flyBehavior)}, quackBehavior_{std::move(quackBehavior)} {}

void Duck::performFly() {
    flyBehavior_->fly();
}

void Duck::performQuack() {
    quackBehavior_->quack();
}
void Duck::swim() {
    std::cout << "All duck float, even decoys!\n";
}

void Duck::setFlyBehavior(std::unique_ptr<FlyBehavior> li) {
    flyBehavior_ = std::move(li);
}
void Duck::setQuackBehavior(std::unique_ptr<QuackBehavior> li) {
    quackBehavior_ = std::move(li);
}