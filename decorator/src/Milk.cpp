#include "Milk.hpp"

Milk::Milk(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage)) {}

std::string Milk::getDescritption() const {
    return beverage_->getDescritption() + ", Steamed Milk";
}

double Milk::cost() const {
    return 0.10 + beverage_->cost();
}