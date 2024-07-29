#ifndef COMPONENT_HPP
#define COMPONENT_HPP
#include "Mediator.hpp"
/**
 * Declaration preventive.
 * Attention au dependances circulaires.
 **/
class Mediator;

/**
 * Abstraite de Composant.
 **/
class Component {
protected:
    Mediator *mediator;
public: 
    Component( Mediator *mediator );
};

/**
 * Composants concrets.
 **/
class Component1 : public Component {
public:
    void doA();
    void doB();
};

class Component2 : public Component {
public:
    void doC();
    void doD();
};

#endif
