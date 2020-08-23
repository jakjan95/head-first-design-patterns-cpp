#pragma once

#include <iostream>

class Screen {
public:
    Screen(const std::string& description)
        : description_{description} {}

    void up() {
        std::cout << description_ << " going up\n";
    }

    void down() {
        std::cout << description_ << " going down\n";
    }

    friend std::ostream& operator<<(std::ostream& os, const Screen& screen) {
        os << screen.description_;
        return os;
    }

private:
    std::string description_;
};
