#include <iostream>
#include <memory>

//Concrete compontents
#include "DarkRoast.hpp"
#include "Decaf.hpp"
#include "Espresso.hpp"
#include "HouseBlend.hpp"

// Decorators
#include "Milk.hpp"
#include "Mocha.hpp"
#include "Soy.hpp"
#include "Whip.hpp"

int main() {
    Espresso espresso;
    std::cout << espresso.getDescritption() << " $" << espresso.cost() << '\n';

    Beverage* cleanEspresso = new Espresso();
    std::cout << cleanEspresso->getDescritption() << " $" << cleanEspresso->cost() << '\n';
    delete cleanEspresso;

    //Espresso with mocha and milk 
    std::unique_ptr<Beverage> espressoWithMochaMilk = std::make_unique<Espresso>();
    espressoWithMochaMilk = std::make_unique<Mocha>(std::move(espressoWithMochaMilk));
    espressoWithMochaMilk = std::make_unique<Milk>(std::move(espressoWithMochaMilk));
    std::cout << espressoWithMochaMilk->getDescritption() << " $" << espressoWithMochaMilk->cost() << '\n';

    //A coffe without coffein with Soy milk and Whip.
    std::unique_ptr<Beverage> decafWithSoyWhip = std::make_unique<Decaf>();
    decafWithSoyWhip = std::make_unique<Soy>(std::move(decafWithSoyWhip));
    decafWithSoyWhip = std::make_unique<Whip>(std::move(decafWithSoyWhip));
    std::cout << decafWithSoyWhip->getDescritption() << " $" << decafWithSoyWhip->cost() << '\n';

    //House blend with mocha and tripple whip
    std::unique_ptr<Beverage> houseBlendTrippleMochaAndWhip = std::make_unique<HouseBlend>();
    houseBlendTrippleMochaAndWhip = std::make_unique<Mocha>(std::move(houseBlendTrippleMochaAndWhip));
    houseBlendTrippleMochaAndWhip = std::make_unique<Mocha>(std::move(houseBlendTrippleMochaAndWhip));
    houseBlendTrippleMochaAndWhip = std::make_unique<Mocha>(std::move(houseBlendTrippleMochaAndWhip));
    houseBlendTrippleMochaAndWhip = std::make_unique<Whip>(std::move(houseBlendTrippleMochaAndWhip));
    std::cout << houseBlendTrippleMochaAndWhip->getDescritption() << " $" << houseBlendTrippleMochaAndWhip->cost() << '\n';

    return 0;
}