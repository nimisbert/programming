#include <iostream>
#include <memory>
#include "Strategy.hpp"
#include "Context.hpp"

int main( void ) {
    Context context( std::make_unique<StrategyA>() );
    std::cout << "Client : Strategy is set to addition.\n";
    context.doSomeBusinessLogic(1, 2);
    std::cout << "\n";

    std::cout << "Client : Strategy is set to soustraction.\n";
    context.setStrategy( std::make_unique<StrategyB>() );
    context.doSomeBusinessLogic(1, 2);

}
