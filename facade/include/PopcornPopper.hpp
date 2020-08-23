#pragma once

#include <iostream>

class PopcornPopper {
public:
    PopcornPopper(const std::string& description)
        : description_{description} {}

    void on() {
        std::cout << description_ << " on\n";
    }

    void off() {
        std::cout << description_ << " off\n";
    }

    void pop() {
        std::cout << description_ << " pooping popcorn!\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const PopcornPopper& popper) {
        os << popper.description_;
        return os;
    }

private:
    std::string description_;
};
