#pragma once

#include <memory>

#include "CeilingFan.hpp"
#include "Command.hpp"

class CeilingFanOnCommand : public Command {
public:
    CeilingFanOnCommand(std::shared_ptr<CeilingFan> ceilingFan, CeilingFan::FanSpeed givenSpeed)
        : ceilingFan_{std::move(ceilingFan)}, givenSpeed_{givenSpeed} {}

    void execute() override {
        previous_ = ceilingFan_->getSpeed();
        ceilingFan_->setSpeed(givenSpeed_);
    }

    void undo() override {
        ceilingFan_->setSpeed(previous_);
    }

    std::string getCommandName() override {
        return "CeilingFanOnCommand speed " + std::to_string(static_cast<int>(givenSpeed_));
    }

private:
    std::shared_ptr<CeilingFan> ceilingFan_;
    CeilingFan::FanSpeed givenSpeed_;
    CeilingFan::FanSpeed previous_;
};
