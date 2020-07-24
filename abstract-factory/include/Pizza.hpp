#pragma once

#include <memory>
#include <string>
#include <vector>

#include "Cheese.hpp"
#include "Clams.hpp"
#include "Dough.hpp"
#include "Pepperoni.hpp"
#include "Sauce.hpp"
#include "Veggies.hpp"

class Pizza {
public:
    virtual ~Pizza() = default;

    virtual void prepare() = 0;
    virtual void bake();
    virtual void cut();
    virtual void box();

    std::string getName() const;
    void setName(const std::string& name);

    friend std::ostream& operator<<(std::ostream& os, const Pizza& p);

protected:
    std::string name_;
    std::shared_ptr<Dough> dough_;
    std::shared_ptr<Sauce> sauce_;
    std::shared_ptr<Cheese> cheese_;
    std::vector<std::shared_ptr<Veggies>> veggies_;
    std::shared_ptr<Pepperoni> pepperoni_;
    std::shared_ptr<Clams> clams_;
};
