#pragma once

#include <memory>

#include "Command.hpp"
#include "Stereo.hpp"

class StereoOffCommand : public Command {
public:
    StereoOffCommand(std::shared_ptr<Stereo> stereo)
        : stereo_{std::move(stereo)} {}

    void execute() override{
        stereo_->off();
    }

private:
    std::shared_ptr<Stereo> stereo_;
};
