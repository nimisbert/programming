#include <iostream>
#include "Component.hpp"

Component::Component( Mediator *mediator ) {
    this->mediator = mediator;
}

void Component::setMediator( Mediator *mediator ) {
    this->mediator = mediator;
}

void Component1::doA() {
    std::cout << "Component 1 does A\n";
    this->mediator->notify(this, "A");
}

void Component1::doB() {
    std::cout << "Component 1 does B\n";
    this->mediator->notify(this, "B");
}

void Component2::doC() {
    std::cout << "Component 2 does C\n";
    this->mediator->notify(this, "C");
}

void Component2::doD() {
    std::cout << "Component 2 does D\n";
    this->mediator->notify(this, "D");
}
