#pragma once

#include <memory>
#include <vector>

#include "Command.hpp"
#include "NoCommand.hpp"

class RemoteControlWithUndo {
public:
    RemoteControlWithUndo() {
        onCommands_ = std::vector<std::shared_ptr<Command>>(7);
        offCommands_ = std::vector<std::shared_ptr<Command>>(7);

        for (size_t i = 0; i < onCommands_.size(); ++i) {
            onCommands_[i] = std::make_shared<NoCommand>();
            offCommands_[i] = std::make_shared<NoCommand>();
        }

        undoCommand_ = std::make_shared<NoCommand>();
    }

    void setCommand(int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand) {
        onCommands_[slot] = onCommand;
        offCommands_[slot] = offCommand;
    }

    void onButtonWasPushed(int slot) {
        onCommands_[slot]->execute();
        undoCommand_ = onCommands_[slot];
    }

    void offButtonWasPushed(int slot) {
        offCommands_[slot]->execute();
        undoCommand_ = offCommands_[slot];
    }

    void undoButtonWasPushed() {
        undoCommand_->undo();
    }

    friend std::ostream& operator<<(std::ostream& os, const RemoteControlWithUndo& cntrl) {
        os << "\n------ Remote Control -----\n";
        return os;
    }

private:
    std::vector<std::shared_ptr<Command>> onCommands_;
    std::vector<std::shared_ptr<Command>> offCommands_;
    std::shared_ptr<Command> undoCommand_;
};
