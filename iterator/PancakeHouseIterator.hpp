#pragma once

#include <vector>

#include "Iterator.hpp"

class PancakeHouseIterator : public Iterator {
public:
    PancakeHouseIterator(std::vector<std::shared_ptr<MenuItem>> items)
        : items_{items} {}

    std::shared_ptr<MenuItem> next() override {
        auto menuItem = items_.at(position_);
        position_++;
        return menuItem;
    }

    bool hasNext() override {
        if (position_ >= items_.size()) {
            return false;
        }
        return true;
    }

private:
    std::vector<std::shared_ptr<MenuItem>> items_;
    int position_ = 0;
    
};
