#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include "Strategy.hpp"

class Context 
{
private:
    std::unique_ptr<Strategy> strategy;
public:
    explicit Context(std::unique_ptr<Strategy> &&strategy) : 
        strategy(std::move(strategy));
    void set_strategy( std::unique_ptr<Strategy> &&strategy);
    void doSomeBusinessLogic();
}

#endif
