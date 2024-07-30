#ifndef FACTORY_HPP
#define FACTORY_HPP
#include <string>
#include "Product.hpp"

class Factory {
public:
    virtual ~Factory() = default;
    virtual Product *FactoryMethod() = 0;
    std::string SomeOperation();
};

class ConcreteFactory1 : public Factory {
public:
    Product *FactoryMethod();
};

class ConcreteFactory2 : public Factory {
public:
    Product *FactoryMethod();
};

#endif
