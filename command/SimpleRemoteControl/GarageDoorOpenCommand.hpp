#pragma once

#include <memory>

#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorOpenCommand : public Command {
public:
    GarageDoorOpenCommand(std::shared_ptr<GarageDoor> garageDoor)
        : garageDoor_{std::move(garageDoor)} {}

    void execute() override {
        garageDoor_->up();
    }

private:
    std::shared_ptr<GarageDoor> garageDoor_;
};
