#include "SoldState.hpp"

#include "GumballMachine.hpp"

SoldState::SoldState(GumballMachine* gumballMachine)
    : gumballMachine_{gumballMachine} {}

void SoldState::insertQuarter() {
    std::cout << "Please wait, we're already giving you a gumball\n";
}

void SoldState::ejectQuarter() {
    std::cout << "Sorry, you already turned the crank\n";
}

void SoldState::turnCrank() {
    std::cout << "Turning twice doesn't get you another gumball\n";
}

void SoldState::dispense() {
    gumballMachine_->releaseBall();
    if (gumballMachine_->getCount() > 0) {
        gumballMachine_->setState(gumballMachine_->getNoQuarterState());
    } else {
        std::cout << "Oops, out of gumballs\n";
        gumballMachine_->setState(gumballMachine_->getSoldOutState());
    }
}
