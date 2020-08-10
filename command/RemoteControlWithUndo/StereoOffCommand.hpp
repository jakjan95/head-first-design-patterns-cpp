#pragma once

#include <memory>

#include "Command.hpp"
#include "Stereo.hpp"

class StereoOffCommand : public Command {
public:
    StereoOffCommand(std::shared_ptr<Stereo> stereo)
        : stereo_{std::move(stereo)} {}

    void execute() override {
        stereo_->off();
    }

    void undo() override {
        stereo_->on();
        stereo_->setCD();
        stereo_->setVolume(11);
    }

private:
    std::shared_ptr<Stereo> stereo_;
};
