#include <iostream>

#include "RemoteControlWithUndo.hpp"

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
    RemoteControlWithUndo remoteControl;

    Light livingRoomLight("Living Room");
    Light kitchenLight("Kitchen");
    GarageDoor garageDoor;
    Stereo stereo("Living Room");
    auto ceilingFan = std::make_shared<CeilingFan>("Living Room");

    auto livingRoomLightOn = std::make_shared<LightOnCommand>(std::make_shared<Light>(livingRoomLight));
    auto livingRoomLightOff = std::make_shared<LightOffCommand>(std::make_shared<Light>(livingRoomLight));

    auto kitchenLightOn = std::make_shared<LightOnCommand>(std::make_shared<Light>(kitchenLight));
    auto kitchenLightOff = std::make_shared<LightOffCommand>(std::make_shared<Light>(kitchenLight));

    auto ceilingFanLow = std::make_shared<CeilingFanOnCommand>(ceilingFan, CeilingFan::FanSpeed::low);
    auto ceilingFanMedium = std::make_shared<CeilingFanOnCommand>(ceilingFan, CeilingFan::FanSpeed::medium);
    auto ceilingFanHigh = std::make_shared<CeilingFanOnCommand>(ceilingFan, CeilingFan::FanSpeed::high);
    auto ceilingFanOff = std::make_shared<CeilingFanOffCommand>(ceilingFan);


    auto garageDoorUpCommand = std::make_shared<GarageDoorUpCommand>(std::make_shared<GarageDoor>(garageDoor));
    auto garageDoorDownCommand = std::make_shared<GarageDoorDownCommand>(std::make_shared<GarageDoor>(garageDoor));

    auto stereoOnWithCD = std::make_shared<StereoOnWithCDCommand>(std::make_shared<Stereo>(stereo));
    auto stereoOff = std::make_shared<StereoOffCommand>(std::make_shared<Stereo>(stereo));

    remoteControl.setCommand(0, livingRoomLightOn, livingRoomLightOff);
    remoteControl.setCommand(1, kitchenLightOn, kitchenLightOff);
    remoteControl.setCommand(2, ceilingFanLow, ceilingFanOff);
    remoteControl.setCommand(3, ceilingFanMedium, ceilingFanOff);
    remoteControl.setCommand(4, ceilingFanHigh, ceilingFanOff);

    remoteControl.setCommand(5, garageDoorUpCommand, garageDoorDownCommand);
    remoteControl.setCommand(6, stereoOnWithCD, stereoOff);

    std::cout << remoteControl << '\n';
    remoteControl.onButtonWasPushed(0);
    remoteControl.offButtonWasPushed(0);
    remoteControl.undoButtonWasPushed();

    remoteControl.onButtonWasPushed(1);
    remoteControl.offButtonWasPushed(1);
    remoteControl.undoButtonWasPushed();

    remoteControl.onButtonWasPushed(2);
    remoteControl.offButtonWasPushed(2);
    remoteControl.undoButtonWasPushed();

    remoteControl.onButtonWasPushed(3);
    remoteControl.offButtonWasPushed(3);
    remoteControl.undoButtonWasPushed();

    remoteControl.onButtonWasPushed(4);
    remoteControl.offButtonWasPushed(4);
    remoteControl.undoButtonWasPushed();

    remoteControl.onButtonWasPushed(5);
    remoteControl.offButtonWasPushed(5);
    remoteControl.undoButtonWasPushed();

    remoteControl.onButtonWasPushed(6);
    remoteControl.offButtonWasPushed(6);
    remoteControl.undoButtonWasPushed();


    return 0;
}
