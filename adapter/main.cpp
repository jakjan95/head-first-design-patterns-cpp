#include <iostream>
#include <memory>

#include "MallardDuck.hpp"
#include "WildTurkey.hpp"
#include "TurkeyAdapter.hpp"

void testDuck(std::shared_ptr<Duck> duck){
    duck->quack();
    duck->fly();
}

int main(){
    auto duck = std::make_shared<MallardDuck>();
    auto turkey = std::make_shared<WildTurkey>();
    auto turkeyAdapter = std::make_shared<TurkeyAdapter>(turkey);

    std::cout<<"The turkey says...\n";
    turkey->gobble();
    turkey->fly();

    std::cout<<"The duck says...\n";
    testDuck(duck);

    std::cout<<"The turkeyAdapter says...\n";
    testDuck(turkeyAdapter);


    return 0;
}
