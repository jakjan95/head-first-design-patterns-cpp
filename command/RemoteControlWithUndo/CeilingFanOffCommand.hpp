#pragma once

#include <memory>

#include "CeilingFan.hpp"
#include "Command.hpp"

class CeilingFanOffCommand : public Command {
public:
    CeilingFanOffCommand(std::shared_ptr<CeilingFan> ceilingFan)
        : ceilingFan_{std::move(ceilingFan)} {}

    void execute() override {
        previous_ = ceilingFan_->getSpeed();
        ceilingFan_->setSpeed(CeilingFan::FanSpeed::off);
    }

    void undo() override{
        ceilingFan_->setSpeed(previous_);
    }

private:
    std::shared_ptr<CeilingFan> ceilingFan_;
    CeilingFan::FanSpeed previous_;
};
