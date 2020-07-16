#include "Whip.hpp"

Whip::Whip(std::unique_ptr<Beverage> beverage)
    : CondimentDecorator(std::move(beverage)) {}

std::string Whip::getDescritption() const {
    return beverage_->getDescritption() + ", Whip";
}

double Whip::cost() const {
    return 0.10 + beverage_->cost();
}