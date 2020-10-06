#pragma once
#include <iostream>
#include <memory>

class State;

class GumballMachine {
public:
    explicit GumballMachine(size_t numberGumballs);

    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void setState(std::shared_ptr<State> state);
    void releaseBall();
    std::shared_ptr<State> getHasQuarterState() const ;
    std::shared_ptr<State> getNoQuarterState() const;
    std::shared_ptr<State> getSoldState() const;
    std::shared_ptr<State> getSoldOutState() const;
    std::shared_ptr<State> getWinnerState() const;

    size_t getCount() const;
    friend std::ostream& operator<<(std::ostream& os, GumballMachine gm);

private:
    std::shared_ptr<State> soldOutState_;
    std::shared_ptr<State> noQuarterState_;
    std::shared_ptr<State> hasQuarterState_;
    std::shared_ptr<State> soldState_;
    std::shared_ptr<State> winnerState_;

    std::shared_ptr<State> state_{soldOutState_};
    size_t count_ = 0;
};

