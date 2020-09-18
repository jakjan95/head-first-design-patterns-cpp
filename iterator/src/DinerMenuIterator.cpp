#include "DinerMenuIterator.hpp"

DinerMenuIterator::DinerMenuIterator(std::array<std::shared_ptr<MenuItem>, 6> items)
    : items_{items} {}

std::shared_ptr<MenuItem> DinerMenuIterator::next() {
    auto menuItem = items_[position_];
    position_++;
    return menuItem;
}

bool DinerMenuIterator::hasNext() {
    if (position_ >= items_.size() || items_[position_] == nullptr) {
        return false;
    }
    return true;
}
