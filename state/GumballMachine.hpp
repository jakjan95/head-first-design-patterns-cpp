#pragma once
#include <iostream>

enum class MachineState {
    SoldOut = 0,
    HasQuarter,
    NoQuarter,
    Sold
};

class GumballMachine {
public:
    GumballMachine(size_t count)
        : count_{count} {
        if (count > 0) {
            state_ = MachineState::NoQuarter;
        }
    }

    void insertQuarter() {
        if (state_ == MachineState::HasQuarter) {
            std::cout << "You can't insert another quarter\n";
        } else if (state_ == MachineState::NoQuarter) {
            state_ = MachineState::HasQuarter;
            std::cout << "You inserted a quarter\n";
        } else if (state_ == MachineState::SoldOut) {
            std::cout << "You can't insert a quarter, the macine is sold out\n";
        } else if (state_ == MachineState::Sold) {
            std::cout << "Please wait, we're already giving you a gumball\n";
        }
    }

    void ejectQuarter() {
        if (state_ == MachineState::HasQuarter) {
            std::cout << "Quarter returned\n";
            state_ = MachineState::NoQuarter;
        } else if (state_ == MachineState::NoQuarter) {
            std::cout << "You haven't inserted a quarter\n";
        } else if (state_ == MachineState::Sold) {
            std::cout << "Sorry, you already turned the crank\n";
        } else if (state_ == MachineState::SoldOut) {
            std::cout << "You cam't eject, you haven't inserted a quarter yet\n";
        }
    }

    void turnCrank() {
        if (state_ == MachineState::Sold) {
            std::cout << "Turning twice doesn't get you another gumball\n";
        } else if (state_ == MachineState::NoQuarter) {
            state_ = MachineState::NoQuarter;
            std::cout << "You turned but there's no quarter\n";
        } else if (state_ == MachineState::SoldOut) {
            std::cout << "You turned, but there are no gumballs\n";
        } else if (state_ == MachineState::HasQuarter) {
            std::cout << "You turned...\n";
            state_ = MachineState::Sold;
            dispense();
        }
    }

    void dispense() {
        if (state_ == MachineState::Sold) {
            std::cout << "A gumball comes rolling out the slot\n";
            count_--;
            if (count_ == 0) {
                std::cout << "Oops, out of gumballs!\n";
                state_ = MachineState::SoldOut;
            } else {
                state_ = MachineState::NoQuarter;
            }
        } else if (state_ == MachineState::NoQuarter) {
            std::cout << "You need to pay first\n";
        } else if (state_ == MachineState::SoldOut) {
            std::cout << "No gumball dispensed\n";
        } else if (state_ == MachineState::HasQuarter) {
            std::cout << "No gumball dispensed\n";
        }
    }

    friend std::ostream& operator<<(std::ostream& os, GumballMachine gm);

private:
    MachineState state_ = MachineState::SoldOut;
    size_t count_ = 0;
};

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
