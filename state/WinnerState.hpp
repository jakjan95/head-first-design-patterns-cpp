#pragma once

#pragma once
#include <memory>

#include "State.hpp"

class GumballMachine;

class WinnerState : public State {
public:
    explicit WinnerState(GumballMachine* gumballMachine);

    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;

private:
    GumballMachine* gumballMachine_;
};
