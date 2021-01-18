#include <iostream>

#include "DuckCall.hpp"
#include "Goose.hpp"
#include "GooseAdapter.hpp"
#include "MallardDuck.hpp"
#include "QuackCounter.hpp"
#include "Quackable.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"

#include "CountingDuckFactory.hpp"
#include "Flock.hpp"
#include "Quackologist.hpp"

#include <memory>

void simulate(std::shared_ptr<Quackable> duck) {
    duck->quack();
}

void simulate(std::shared_ptr<AbstractDuckFactory> duckFactory) {
    std::shared_ptr<Quackable> redheadDuck = duckFactory->createRedheadDuck();
    std::shared_ptr<Quackable> duckCall = duckFactory->createDuckCall();
    std::shared_ptr<Quackable> rubberDuck = duckFactory->createRubberDuck();
    std::shared_ptr<Quackable> gooseDuck = std::make_shared<GooseAdapter>(std::make_shared<Goose>());
    std::cout << "\nDuck Simulator: With Observer - Flocks!\n";
    auto flockOfDucks = std::make_shared<Flock>();

    flockOfDucks->add(redheadDuck);
    flockOfDucks->add(duckCall);
    flockOfDucks->add(rubberDuck);
    flockOfDucks->add(gooseDuck);

    auto flockOfMallards = std::make_shared<Flock>();

    std::shared_ptr<Quackable> mallardOne = duckFactory->createMallardDuck();
    std::shared_ptr<Quackable> mallardTwo = duckFactory->createMallardDuck();
    std::shared_ptr<Quackable> mallardThree = duckFactory->createMallardDuck();
    std::shared_ptr<Quackable> mallardFour = duckFactory->createMallardDuck();

    flockOfMallards->add(mallardOne);
    flockOfMallards->add(mallardTwo);
    flockOfMallards->add(mallardThree);
    flockOfMallards->add(mallardFour);

    flockOfDucks->add(flockOfMallards);

    std::cout << "\nDuck Simulator: Whole Flock Simulation!\n";
    simulate(flockOfDucks);

    std::cout << "\nDuck Simulator: Mallard Flock Simulation!\n";
    simulate(flockOfMallards);

    std::cout << "\nDuck Simulator: Whole Flock with Observer!\n";

    auto quackologist = std::make_unique<Quackologist>();
    flockOfDucks->registerObserver(quackologist.get());

    simulate(flockOfDucks);

    std::cout << "The ducks quacked " << QuackCounter::getQuacks() << " times\n";
}

int main() {
    std::shared_ptr<AbstractDuckFactory> duckFactory = std::make_shared<CountingDuckFactory>();
    simulate(duckFactory);
    return 0;
}
