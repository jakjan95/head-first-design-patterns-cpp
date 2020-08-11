#pragma once

#include <memory>

#include "Command.hpp"

class NoCommand : public Command {
public:
    NoCommand() {}

    void execute() override {
    }

    void undo() override {
    }

    std::string getCommandName() override{
        return "No command";
    }

};
