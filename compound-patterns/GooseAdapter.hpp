#pragma once

#include <memory>

#include "Goose.hpp"
#include "Quackable.hpp"

class GooseAdapter : public Quackable {
public:
    explicit GooseAdapter(std::shared_ptr<Goose> goose)
        : goose_{goose} {
        observable_ = std::make_unique<Observable>(this);
    }

    void quack() override {
        goose_->honk();
        notifyObservers();
    }

    void registerObserver(Observer* observer) override {
        observable_->registerObserver(observer);
    }

    void notifyObservers() override {
        observable_->notifyObservers();
    }

    std::string print() const {
        return "Goose as a Duck";
    }

private:
    std::shared_ptr<Goose> goose_;
    std::unique_ptr<Observable> observable_;
};
