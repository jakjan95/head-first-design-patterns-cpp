#pragma once

#include <memory>

#include "QuackBehavior.hpp"

class DuckCall {
public:
    DuckCall();
    ~DuckCall() = default;
    void performQuack();

private:
    std::unique_ptr<QuackBehavior> quackBehavior_;
};