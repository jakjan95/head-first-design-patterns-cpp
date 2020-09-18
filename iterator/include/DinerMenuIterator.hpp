#pragma once

#include "Iterator.hpp"

class DinerMenuIterator : public Iterator {
public:
    DinerMenuIterator(std::array<std::shared_ptr<MenuItem>, 6> items);
    std::shared_ptr<MenuItem> next() override;
    bool hasNext() override;

private:
    std::array<std::shared_ptr<MenuItem>, 6> items_;
    int position_ = 0;
};
