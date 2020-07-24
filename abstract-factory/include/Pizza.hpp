#pragma once

#include <memory>
#include <string>
#include <vector>

#include "Cheese.hpp"
#include "Dough.hpp"
#include "Sauce.hpp"

// class Veggies;
// class Pepperoni;
// class Clams;

class Pizza {
public:
    virtual ~Pizza() = default;

    virtual void prepare() = 0;
    virtual void bake();
    virtual void cut();
    virtual void box();

    std::string getName() const {
        return name_;
    }

    void setName(std::string name) {
        name_ = name;
    }

    friend std::ostream& operator<<(std::ostream& os, const Pizza& p) {
        std::string fullName = p.getName() + ": ";
        if (p.dough_) {
            fullName += p.dough_->toString() + ", ";
        }

        if (p.sauce_) {
            fullName += p.sauce_->toString() + ", ";
        }

        if (p.cheese_) {
            fullName += p.cheese_->toString();
        }
        fullName += ".";

        return os << fullName;
    }

protected:
    std::string name_;
    std::shared_ptr<Dough> dough_;
    std::shared_ptr<Sauce> sauce_;
    std::shared_ptr<Cheese> cheese_;

    // std::vector<std::unique_ptr<Veggies>> veggies_;
    // std::unique_ptr<Pepperoni> pepperoni_;
    // std::unique_ptr<Clams> clams_;
};
