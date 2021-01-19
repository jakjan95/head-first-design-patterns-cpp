#pragma once

#include "AbstractDuckFactory.hpp"

#include "DuckCall.hpp"
#include "MallardDuck.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"

class DuckFactory : public AbstractDuckFactory {
public:
    std::shared_ptr<Quackable> createMallardDuck() {
        return std::make_shared<MallardDuck>();
    }

    std::shared_ptr<Quackable> createRedheadDuck() {
        return std::make_shared<RedheadDuck>();
    }

    std::shared_ptr<Quackable> createDuckCall() {
        return std::make_shared<DuckCall>();
    }

    std::shared_ptr<Quackable> createRubberDuck() {
        return std::make_shared<RubberDuck>();
    }
};
