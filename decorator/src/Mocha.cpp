#include "Mocha.hpp"

Mocha::Mocha(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage)) {}

std::string Mocha::getDescritption() const {
    return beverage_->getDescritption() + ", Mocha";
}

double Mocha::cost() const {
    return 0.20 + beverage_->cost();
}