#pragma once

class DisplayElement {
public:
    virtual void display() const = 0;
    virtual ~DisplayElement() = default;
};