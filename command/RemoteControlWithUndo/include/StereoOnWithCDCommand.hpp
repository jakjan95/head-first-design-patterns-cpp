#pragma once

#include <memory>

#include "Command.hpp"
#include "Stereo.hpp"

class StereoOnWithCDCommand : public Command {
public:
    StereoOnWithCDCommand(std::shared_ptr<Stereo> stereo)
        : stereo_{std::move(stereo)} {}

    void execute() override {
        stereo_->on();
        stereo_->setCD();
        stereo_->setVolume(11);
    }

    void undo() override {
        stereo_->off();
    }
    
    std::string getCommandName() override{
        return "StereoOnWithCDCommand";
    }


private:
    std::shared_ptr<Stereo> stereo_;
};
