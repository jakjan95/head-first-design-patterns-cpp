#pragma once
#include <memory>

#include "State.hpp"

class GumballMachine;

class SoldState : public State {
public:
    explicit SoldState(GumballMachine* gumballMachine);

    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;

private:
    GumballMachine* gumballMachine_;
};
