#include "Soy.hpp"

Soy::Soy(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage)) {}

std::string Soy::getDescritption() const {
    return beverage_->getDescritption() + ", Soy";
}

double Soy::cost() const {
    return 0.15 + beverage_->cost();
}