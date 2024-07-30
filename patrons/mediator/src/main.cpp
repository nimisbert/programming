#include <iostream>
#include "Mediator.hpp"
#include "Component.hpp"

int main( void ) {
    Component1 *c1 = new Component1;
    Component2 *c2 = new Component2;
    ConcreteMediator *mediator = new ConcreteMediator(c1, c2);
    std::cout << "Client triggers operations A.\n";
    c1->doA();
    std::cout << "\nClient triggers operations D.\n";
    c2->doD();
    delete c1;
    delete c2;
    delete mediator;
    return 0;
}
