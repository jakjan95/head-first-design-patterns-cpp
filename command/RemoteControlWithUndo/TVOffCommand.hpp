#pragma once

#include <memory>

#include "Command.hpp"
#include "TV.hpp"

class TVOffCommand : public Command {
public:
    TVOffCommand(std::shared_ptr<TV> tv)
        : tv_{std::move(tv)} {}

    void execute() override {
        tv_->off();
    }

    void undo() override {
        tv_->on();
    }

private:
    std::shared_ptr<TV> tv_;
};
