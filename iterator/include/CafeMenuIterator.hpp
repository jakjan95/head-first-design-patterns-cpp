#pragma once

#include <vector>

#include "Iterator.hpp"

#include <unordered_map>

class CafeMenuIterator : public Iterator {
public:
    CafeMenuIterator(std::unordered_map<std::string, std::shared_ptr<MenuItem>> items);
    std::shared_ptr<MenuItem> next() override;
    bool hasNext() override;

private:
    std::unordered_map<std::string, std::shared_ptr<MenuItem>> items_;
    std::unordered_map<std::string, std::shared_ptr<MenuItem>>::iterator position_ = items_.begin();
};
