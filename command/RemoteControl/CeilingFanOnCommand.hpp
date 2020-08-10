#pragma once

#include <memory>

#include "CeilingFan.hpp"
#include "Command.hpp"

class CeilingFanOnCommand : public Command {
public:
    CeilingFanOnCommand(std::shared_ptr<CeilingFan> ceilingFan)
        : ceilingFan_{std::move(ceilingFan)} {}

    void execute() override {
        ceilingFan_->high();
    }

private:
    std::shared_ptr<CeilingFan> ceilingFan_;
};
