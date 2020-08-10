#include <iostream>

#include "RemoteControl.hpp"

#include "Light.hpp"
#include "LightOffCommand.hpp"
#include "LightOnCommand.hpp"

#include "GarageDoor.hpp"
#include "GarageDoorDownCommand.hpp"
#include "GarageDoorUpCommand.hpp"

#include "Stereo.hpp"
#include "StereoOffCommand.hpp"
#include "StereoOnWithCDCommand.hpp"

#include "CeilingFan.hpp"
#include "CeilingFanOnCommand.hpp"
#include "CeilingFanOffCommand.hpp"

int main() {
    RemoteControl remoteControl;

    Light livingRoomLight("Living Room");
    Light kitchenLight("Kitchen");
    CeilingFan ceilingFan("Living Room");
    GarageDoor garageDoor;
    Stereo stereo("Living Room");

    auto livingRoomLightOn = std::make_shared<LightOnCommand>(std::make_shared<Light>(livingRoomLight));
    auto livingRoomLightOff = std::make_shared<LightOffCommand>(std::make_shared<Light>(livingRoomLight));

    auto kitchenLightOn = std::make_shared<LightOnCommand>(std::make_shared<Light>(kitchenLight));
    auto kitchenLightOff = std::make_shared<LightOffCommand>(std::make_shared<Light>(kitchenLight));

    auto ceilingFanOn = std::make_shared<CeilingFanOnCommand>(std::make_shared<CeilingFan>(ceilingFan));
    auto ceilingFanOff = std::make_shared<CeilingFanOffCommand>(std::make_shared<CeilingFan>(ceilingFan));


    auto garageDoorUpCommand = std::make_shared<GarageDoorUpCommand>(std::make_shared<GarageDoor>(garageDoor));
    auto garageDoorDownCommand = std::make_shared<GarageDoorDownCommand>(std::make_shared<GarageDoor>(garageDoor));

    auto stereoOnWithCD = std::make_shared<StereoOnWithCDCommand>(std::make_shared<Stereo>(stereo));
    auto stereoOff = std::make_shared<StereoOffCommand>(std::make_shared<Stereo>(stereo));

    remoteControl.setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl.setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl.setCommand(2, ceilingFanOn, ceilingFanOff);
    remoteControl.setCommand(3, garageDoorUpCommand, garageDoorDownCommand);
    remoteControl.setCommand(4, stereoOnWithCD, stereoOff);


    remoteControl.onButtonWasPushed(0);
    remoteControl.offButtonWasPushed(0);

    remoteControl.onButtonWasPushed(1);
    remoteControl.offButtonWasPushed(1);

    remoteControl.onButtonWasPushed(2);
    remoteControl.offButtonWasPushed(2);

    remoteControl.onButtonWasPushed(3);
    remoteControl.offButtonWasPushed(3);

    remoteControl.onButtonWasPushed(4);
    remoteControl.offButtonWasPushed(4);

    return 0;
}
