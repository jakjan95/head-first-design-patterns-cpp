#include <iostream>

#include "SimpleRemoteControl.hpp"

#include "Light.hpp"
#include "LightOnCommand.hpp"

#include "GarageDoor.hpp"
#include "GarageDoorOpenCommand.hpp"

int main() {
    SimpleRemoteControl remote;
    auto lightOn = std::make_shared<LightOnCommand>(std::make_shared<Light>());
    auto garageOpen = std::make_shared<GarageDoorOpenCommand>(std::make_shared<GarageDoor>());

    remote.setCommand(lightOn);
    remote.buttonWasPressed();

    remote.setCommand(garageOpen);
    remote.buttonWasPressed();

    return 0;
}
