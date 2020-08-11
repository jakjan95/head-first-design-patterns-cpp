#pragma once

#include <algorithm>
#include <memory>
#include <vector>

#include "Command.hpp"

class MacroCommand : public Command {
public:
    MacroCommand(std::vector<std::shared_ptr<Command>> commands)
        : commands_{commands} {}

    void execute() override {
        for (auto el : commands_) {
            el->execute();
        }
    }

    void undo() override {
        std::for_each(commands_.rbegin(), commands_.rend(), [](auto el) { el->undo(); });
    }

    std::string getCommandName() override{
        return "Macro command";
    }

private:
    std::vector<std::shared_ptr<Command>> commands_;
};
