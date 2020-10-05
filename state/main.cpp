#include <iostream>
#include <memory>

#include "GumballMachine.hpp"

int main() {
    auto gumballMachine = std::make_unique<GumballMachine>(5);

    std::cout << *gumballMachine<<'\n';

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine<<'\n';

    gumballMachine->insertQuarter();
    gumballMachine->ejectQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine<<'\n';

    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->ejectQuarter();

    std::cout << *gumballMachine<<'\n';

    gumballMachine->insertQuarter();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();
    gumballMachine->insertQuarter();
    gumballMachine->turnCrank();

    std::cout << *gumballMachine<<'\n';
    
    return 0;
}
