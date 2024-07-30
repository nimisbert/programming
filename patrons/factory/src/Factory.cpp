#include "Factory.hpp"

std::string Factory::SomeOperation() {
    Product *product = this->FactoryMethod();
    std::string result = "Factory: code worked with " + product->Operation();
    delete product;
    return result;
}

Product* ConcreteFactory1::FactoryMethod() {
    return new Product1();
}

Product* ConcreteFactory2::FactoryMethod() {
    return new Product2();
}
