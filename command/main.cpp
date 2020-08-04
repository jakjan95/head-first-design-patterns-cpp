#include <iostream>


#include "SimpleRemoteControl.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"

int main(){
    SimpleRemoteControl remote;
    auto light = std::make_shared<Light>();
    auto lightOn = std::make_shared<LightOnCommand>(light);

    remote.setCommand(lightOn);
    remote.buttonWasPressed();

    return 0;
}
