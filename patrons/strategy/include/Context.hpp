#ifndef CONTEXT_HPP
#define CONTEXT_HPP

#include <memory>
#include "Strategy.hpp"

class Context 
{
private:
    std::unique_ptr<Strategy> strategy;
public:
    explicit Context( std::unique_ptr<Strategy> &&strategy );
    void setStrategy( std::unique_ptr<Strategy> &&strategy );
    void doSomeBusinessLogic( int a, int b ) const;
};

#endif
