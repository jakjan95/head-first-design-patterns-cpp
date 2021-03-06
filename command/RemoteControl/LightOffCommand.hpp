#pragma once

#include <memory>

#include "Command.hpp"
#include "Light.hpp"

class LightOffCommand : public Command {
public:
    LightOffCommand(std::shared_ptr<Light> light)
        : light_{std::move(light)} {}

    void execute() override{
        light_->off();
    }

private:
    std::shared_ptr<Light> light_;
};
