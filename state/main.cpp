#include <iostream>
#include <memory>

#include "GumballMachine.hpp"

#include "SoldOutState.hpp"
#include "NoQuarterState.hpp"
#include "HasQuarterState.hpp"
#include "SoldState.hpp"

GumballMachine::GumballMachine(size_t numberGumballs)
    : count_{numberGumballs} {
    soldOutState_ = std::make_shared<SoldOutState>(this);
    noQuarterState_ = std::make_shared<NoQuarterState>(this);
    hasQuarterState_ = std::make_shared<HasQuarterState>(this);
    soldState_ = std::make_shared<SoldState>(this);

    if (numberGumballs > 0) {
        state_ = noQuarterState_;
    }
}

int main() {
    auto gumballMachine = std::make_shared<GumballMachine>(5);

    std::cout << *gumballMachine << '\n';

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine << '\n';

    gumballMachine->insertQuarter();
    gumballMachine->ejectQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine << '\n';

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->ejectQuarter();

    std::cout << *gumballMachine << '\n';

    gumballMachine->insertQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine << '\n';

    return 0;
}
