#include <iostream>
#include "Context.hpp"

Context::Context( std::unique_ptr<Strategy> &&strategy ) {
    this->strategy = std::move(strategy);
}
void Context::setStrategy( std::unique_ptr<Strategy> &&strategy ) {
    this->strategy = std::move(strategy);
}

void Context::doSomeBusinessLogic( int a, int b ) const {
    if( strategy ) {
        std::cout << "Context: computing data using strategy\n";
        std::cout << "Result : " << this->strategy->doAlgorithm(a,b) << "\n";
    } else {
        std::cout << "Context: Strategy isnt set\n";
    }
}
