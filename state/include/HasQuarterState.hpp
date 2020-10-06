#pragma once
#include <memory>

#include "State.hpp"

class GumballMachine;

class HasQuarterState : public State {
public:
    explicit HasQuarterState(GumballMachine* gumballMachine);

    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;

private:
    GumballMachine* gumballMachine_;
};
