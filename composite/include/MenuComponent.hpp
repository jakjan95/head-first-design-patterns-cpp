#pragma once

#include <memory>

class MenuComponent {
public:
    virtual void add(std::shared_ptr<MenuComponent> menuComponent);
    virtual void remove(std::shared_ptr<MenuComponent> menuComponent);
    virtual std::shared_ptr<MenuComponent> getChild(int i) const;
    virtual std::string getName() const;
    virtual std::string getDescription() const;
    virtual double getPrice() const;
    virtual bool isVegetarian() const;
    virtual void print() const;
};
