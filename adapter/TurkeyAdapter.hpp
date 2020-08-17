#pragma once

#include <memory>

#include "Duck.hpp"
#include "Turkey.hpp"

class TurkeyAdapter : public Duck {
public:
    TurkeyAdapter(std::shared_ptr<Turkey> turkey)
        : turkey_{turkey} {}

    void quack() override{
        turkey_->gobble();
    }

    void fly() override{
        turkey_->fly();
    }

private:
    std::shared_ptr<Turkey> turkey_;
};
