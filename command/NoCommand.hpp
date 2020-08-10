#pragma once

#include <memory>

#include "Command.hpp"

class NoCommand : public Command {
public:
    NoCommand() {}

    void execute() override {
    }
};
