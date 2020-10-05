#include "GumballMachine.hpp"
#include "State.hpp"

void GumballMachine::insertQuarter() {
    state_->insertQuarter();
}

void GumballMachine::ejectQuarter() {
    state_->ejectQuarter();
}

void GumballMachine::turnCrank() {
    state_->turnCrank();
    state_->dispense();
}

void GumballMachine::setState(std::shared_ptr<State> state) {
    state_ = state;
}

void GumballMachine::releaseBall() {
    std::cout << "A gumball comes rolling out the slot...\n";
    if (count_ != 0) {
        count_--;
    }
}

std::shared_ptr<State> GumballMachine::getHasQuarterState() const {
    return hasQuarterState_;
}

std::shared_ptr<State> GumballMachine::getNoQuarterState() const {
    return noQuarterState_;
}

std::shared_ptr<State> GumballMachine::getSoldState() const {
    return soldState_;
}

std::shared_ptr<State> GumballMachine::getSoldOutState() const {
    return soldOutState_;
}

size_t GumballMachine::getCount() const {
    return count_;
}

std::ostream& operator<<(std::ostream& os, GumballMachine gm) {
    os << "*** Gumball Machine ***\n"
       << "Inventory: " << gm.count_ << '\n';
    if (gm.count_ > 0) {
        os << "Machine is waiting for quarter\n";
    } else {
        os << "Machine is sold out\n";
    }
    return os;
}
