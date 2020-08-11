#pragma once

#include <memory>

#include "Command.hpp"
#include "TV.hpp"

class TVOnCommand : public Command {
public:
    TVOnCommand(std::shared_ptr<TV> tv)
        : tv_{std::move(tv)} {}

    void execute() override{
        tv_->on();
    }

    void undo() override{
        tv_->off();
    }

private:
    std::shared_ptr<TV> tv_;
};
