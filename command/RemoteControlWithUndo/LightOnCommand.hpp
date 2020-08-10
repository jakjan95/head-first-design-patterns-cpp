#pragma once

#include <memory>

#include "Command.hpp"
#include "Light.hpp"

class LightOnCommand : public Command {
public:
    LightOnCommand(std::shared_ptr<Light> light)
        : light_{std::move(light)} {}

    void execute() override{
        light_->on();
    }

    void undo() override{
        light_->off();
    }

private:
    std::shared_ptr<Light> light_;
};
