#pragma once
#include <memory>

#include "State.hpp"

class GumballMachine;

class NoQuarterState : public State {
public:
    explicit NoQuarterState(GumballMachine* gumballMachine);

    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;

private:
    GumballMachine* gumballMachine_;
};
