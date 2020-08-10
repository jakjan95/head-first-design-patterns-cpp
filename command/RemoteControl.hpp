#pragma once

#include <memory>
#include <vector>

#include "Command.hpp"
#include "NoCommand.hpp"

class RemoteControl {
public:
    RemoteControl() {
        onCommands_ = std::vector<std::shared_ptr<Command>>(7);
        offCommands_ = std::vector<std::shared_ptr<Command>>(7);

        //sjsjsjsjjs
        //std::shared_ptr<Command> noCommand = std::make_shared<NoCommand>();

        //foor loop:
        for (size_t i = 0; i < onCommands_.size(); ++i) {
            onCommands_[i] = std::make_shared<NoCommand>();
            offCommands_[i] = std::make_shared<NoCommand>();
        }
    }

    void setCommand(int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand) {
        onCommands_[slot] = onCommand;
        offCommands_[slot] = offCommand;
    }

    void onButtonWasPushed(int slot) {
        onCommands_[slot]->execute();
    }

    void offButtonWasPushed(int slot) {
        offCommands_[slot]->execute();
    }

    //ostream << jak w przypadku piccy?
    //nazwa klasy tej komendy :P
    friend std::ostream& operator<<(std::ostream& os, const RemoteControl& cntrl) {
        os << "\n------ Remote Control -----\n";
        return os;
    }

private:
    std::vector<std::shared_ptr<Command>> onCommands_;
    std::vector<std::shared_ptr<Command>> offCommands_;
};
