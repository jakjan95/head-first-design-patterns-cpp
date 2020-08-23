#pragma once

#include <iostream>
#include <memory>

class Amplifier;

class Tuner {
public:
    Tuner(const std::string& description, std::shared_ptr<Amplifier> amplifier)
        : description_{description}, amplifier_{amplifier} {}

    void on() {
        std::cout << description_ << " on\n";
    }

    void off() {
        std::cout << description_ << " off\n";
    }

    void setFrequency(double frequency) {
        std::cout << description_ << " setting frequency to " << frequency << '\n';
        frequency_ = frequency;
    }

    void setAm() {
        std::cout << description_ << " setting AM mode\n";
    }

    void setFm() {
        std::cout << description_ << " setting FM mode\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const Tuner& tuner){
        os << tuner.description_;
        return os;
    }

private:
    std::string description_;
    std::shared_ptr<Amplifier> amplifier_;
    double frequency_;
};
