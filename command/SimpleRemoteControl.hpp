#pragma once

#include <memory>
#include "Command.hpp"

class SimpleRemoteControl {
public:
    SimpleRemoteControl()
        : slot_{nullptr} {}

    void setCommand(const std::shared_ptr<Command>& command) {
        slot_ = command;
    }

    void buttonWasPressed() {
        slot_->execute();
    }

private:
    std::shared_ptr<Command> slot_;
};
