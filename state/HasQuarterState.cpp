#include "HasQuarterState.hpp"

#include <random>

#include "GumballMachine.hpp"

HasQuarterState::HasQuarterState(GumballMachine* gumballMachine)
    : gumballMachine_{gumballMachine} {}

void HasQuarterState::insertQuarter() {
    std::cout << "You can't inserted another quarter\n";
}

void HasQuarterState::ejectQuarter() {
    std::cout << "Quarter returned\n";
    gumballMachine_->setState(gumballMachine_->getNoQuarterState());
}

void HasQuarterState::turnCrank() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 10);
    auto winner = distrib(gen);

    std::cout << "You turned...\n";
    if (winner == 0 && gumballMachine_->getCount() > 1) {
        gumballMachine_->setState(gumballMachine_->getWinnerState());
    } else {
        gumballMachine_->setState(gumballMachine_->getSoldState());
    }
}

void HasQuarterState::dispense() {
    std::cout << "No gumball dispensed\n";
}
