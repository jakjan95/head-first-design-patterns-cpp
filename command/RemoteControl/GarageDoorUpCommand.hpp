#pragma once

#include <memory>

#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorUpCommand : public Command {
public:
    GarageDoorUpCommand(std::shared_ptr<GarageDoor> garageDoor)
        : garageDoor_{std::move(garageDoor)} {}

    void execute() override {
        garageDoor_->up();
    }

private:
    std::shared_ptr<GarageDoor> garageDoor_;
};
