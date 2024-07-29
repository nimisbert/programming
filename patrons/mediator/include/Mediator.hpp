#ifndef MEDIATOR_HPP
#define MEDIATOR_HPP
#include <string>
#include "Component.hpp"
/** 
 * Declaration preventive.
 * Attention au dependances circulaires.
 **/
class Component;
class Component1;
class Component2;

/**
 * Abstraite de Mediateur.
 **/
class Mediator {
public:
    virtual void notify( Component *sender, std::string event ) const = 0;        
};


/**
 * Mediateur concret.
 **/
class ConcreteMediator : public Mediator {
private:
    Component1 *component1;
    Component2 *component2;

public:
    ConcreteMediator( Component1 *c1, Component2 *c2 );
    void notify( Component *sender, std::string event );
};

#endif
