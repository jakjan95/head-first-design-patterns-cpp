#pragma once

#include <vector>

#include "Iterator.hpp"

class PancakeHouseIterator : public Iterator {
public:
    PancakeHouseIterator(std::vector<std::shared_ptr<MenuItem>> items);

    std::shared_ptr<MenuItem> next() override;
    bool hasNext() override;

private:
    std::vector<std::shared_ptr<MenuItem>> items_;
    int position_ = 0;
};
