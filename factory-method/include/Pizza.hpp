#pragma once

#include <string>
#include <vector>

class Pizza {
public:
    virtual void prepare();
    virtual void bake();
    virtual void cut();
    virtual void box();

    std::string getName() const {
        return name_;
    }

protected:
    std::string name_;
    std::string dough_;
    std::string sauce_;
    std::vector<std::string> toppings_;
};
