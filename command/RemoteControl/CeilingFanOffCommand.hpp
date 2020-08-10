#pragma once

#include <memory>

#include "CeilingFan.hpp"
#include "Command.hpp"

class CeilingFanOffCommand : public Command {
public:
    CeilingFanOffCommand(std::shared_ptr<CeilingFan> ceilingFan)
        : ceilingFan_{std::move(ceilingFan)} {}

    void execute() override {
        ceilingFan_->off();
    }

private:
    std::shared_ptr<CeilingFan> ceilingFan_;
};
