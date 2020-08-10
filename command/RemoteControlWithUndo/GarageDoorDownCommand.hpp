#pragma once

#include <memory>

#include "Command.hpp"
#include "GarageDoor.hpp"

class GarageDoorDownCommand : public Command {
public:
    GarageDoorDownCommand(std::shared_ptr<GarageDoor> garageDoor)
        : garageDoor_{std::move(garageDoor)} {}

    void execute() override {
        garageDoor_->down();
    }

    void undo() override{
        garageDoor_->up();
    }

private:
    std::shared_ptr<GarageDoor> garageDoor_;
};
