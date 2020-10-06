#include "WinnerState.hpp"

#include "GumballMachine.hpp"

WinnerState::WinnerState(GumballMachine* gumballMachine)
    : gumballMachine_{gumballMachine} {}

void WinnerState::insertQuarter() {
    std::cout << "Please wait, we're already giving you a gumball\n";
}

void WinnerState::ejectQuarter() {
    std::cout << "Sorry, you already turned the crank\n";
}

void WinnerState::turnCrank() {
    std::cout << "Turning twice doesn't get you another gumball\n";
}

void WinnerState::dispense() {
    std::cout << "YOU'RE A WINNER!!! You get two gumballs for your quarter\n";
    gumballMachine_->releaseBall();
    if (gumballMachine_->getCount() == 0) {
        gumballMachine_->setState(gumballMachine_->getSoldOutState());
    } else {
        gumballMachine_->releaseBall();
        if (gumballMachine_->getCount() > 0) {
            gumballMachine_->setState(gumballMachine_->getNoQuarterState());
        } else {
            std::cout << "Oops, out of gumballs\n";
            gumballMachine_->setState(gumballMachine_->getSoldOutState());
        }
    }
}
