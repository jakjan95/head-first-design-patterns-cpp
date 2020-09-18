#include "PancakeHouseIterator.hpp"

PancakeHouseIterator::PancakeHouseIterator(std::vector<std::shared_ptr<MenuItem>> items)
    : items_{items} {}

std::shared_ptr<MenuItem> PancakeHouseIterator::next() {
    auto menuItem = items_.at(position_);
    position_++;
    return menuItem;
}

bool PancakeHouseIterator::hasNext() {
    if (position_ >= items_.size()) {
        return false;
    }
    return true;
}
