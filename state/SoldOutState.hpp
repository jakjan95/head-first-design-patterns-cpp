#pragma once

#pragma once
#include <memory>

#include "GumballMachine.hpp"
#include "State.hpp"

class SoldOutState : public State {
public:
    explicit SoldOutState(GumballMachine* gumballMachinne);

    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;

private:
    GumballMachine* gumballMachine_;
};
