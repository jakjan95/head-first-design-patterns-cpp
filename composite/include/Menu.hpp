#pragma once

#include <memory>
#include <vector>

#include "MenuComponent.hpp"

class Menu : public MenuComponent {
public:
    Menu(std::string name, std::string description);

    void add(std::shared_ptr<MenuComponent> menuComponent) override;
    void remove(std::shared_ptr<MenuComponent> menuComponent) override;
    std::shared_ptr<MenuComponent> getChild(int i) const override;
    std::string getName() const override;
    std::string getDescription() const override;
    void print() const override;

private:
    std::vector<std::shared_ptr<MenuComponent>> menuComponents_;
    std::string name_;
    std::string description_;
};
