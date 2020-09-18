#include "CafeMenuIterator.hpp"

CafeMenuIterator::CafeMenuIterator(std::unordered_map<std::string, std::shared_ptr<MenuItem>> items)
    : items_{items} {}

std::shared_ptr<MenuItem> CafeMenuIterator::next() {
    auto menuItem = position_;
    position_++;
    return menuItem->second;
}

bool CafeMenuIterator::hasNext() {
    if (position_ == items_.end()) {
        return false;
    }
    return true;
}
