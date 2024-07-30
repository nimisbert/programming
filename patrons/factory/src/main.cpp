#include <iostream>
#include "Factory.hpp"


void client( Factory &factory ) {
    std::cout << factory.SomeOperation() << std::endl;
    std::cout << std::endl;
}

int main( void ) {
    std::cout << "App: Launched with ConcreteFactory1.\n";
    Factory *factory1 = new ConcreteFactory1();
    client(*factory1);

    std::cout << "App: Launched with ConcreteFactory2.\n";
    Factory *factory2 = new ConcreteFactory2();
    client(*factory2);

    delete factory1;
    delete factory2;
    return 0;
}
