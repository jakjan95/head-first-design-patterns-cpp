#include "DuckCall.hpp"

#include "Quack.hpp"

DuckCall::DuckCall()
    : quackBehavior_{std::make_unique<Quack>()} {}

void DuckCall::performQuack() {
    quackBehavior_->quack();
}
