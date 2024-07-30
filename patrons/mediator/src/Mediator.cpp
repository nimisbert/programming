#include <string>
#include <iostream>
#include "Mediator.hpp"

ConcreteMediator::ConcreteMediator( Component1 *c1, Component2 *c2 ) {
    // assignation des composants au mediateur
    this->component1 = c1;
    this->component2 = c2;
    // assignation du mediateur au composants
    this->component1->setMediator(this);
    this->component2->setMediator(this);
}

void ConcreteMediator::notify( Component *sender, std::string event ) {
    if( event == "A" ) {
        std::cout << "Mediator reacts on A and trigger operations :\n";
        this->component2->doC();
    } else if( event == "D" ) {
        std::cout << "Mediator reacts on D and trigger operations :\n";
        this->component1->doB();
        this->component2->doC();
    } else {
        // do nothing
    }
}
