#include "SoldOutState.hpp"

SoldOutState::SoldOutState(GumballMachine* gumballMachinne)
    : gumballMachine_{gumballMachinne} {}

void SoldOutState::insertQuarter() {
    std::cout << "You can't insert a quarter, the machine is sold out\n";
}

void SoldOutState::ejectQuarter() {
    std::cout << "You can't eject, you haven't inserted a quarter jet\n";
}

void SoldOutState::turnCrank() {
    std::cout << "You turned but there are no gumballs\n";
}

void SoldOutState::dispense() {
    std::cout << "No gumball dispensed\n";
}
