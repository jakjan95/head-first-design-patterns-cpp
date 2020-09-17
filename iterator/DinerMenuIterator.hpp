#pragma once

#include "Iterator.hpp"

class DinerMenuIterator : public Iterator {
public:
    DinerMenuIterator(std::array<std::shared_ptr<MenuItem>, 6> items)
        : items_{items} {}

    std::shared_ptr<MenuItem> next() override {
        auto menuItem = items_[position_];
        position_++;
        return menuItem;
    }

    bool hasNext() override {
        if (position_ >= items_.size() || items_[position_] == nullptr) {
            return false;
        }
        return true;
    }

private:
    std::array<std::shared_ptr<MenuItem>, 6> items_;
    int position_ = 0;
};
