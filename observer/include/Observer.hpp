#pragma once

class Observer {
public:
    virtual void update(double temperature, double humidity, double pressure) = 0;
    virtual ~Observer() = default;
};