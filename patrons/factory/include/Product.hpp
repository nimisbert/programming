#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

/**
 * Interface de Produit
 **/
class Product {
public:
    virtual ~Product() = default;
    virtual std::string Operation() = 0;
};

/**
 * Implementation concrete de Produit
 **/
class Product1 : public Product {
public:
    std::string Operation();
};

class Product2 : public Product {
public:
    std::string Operation();        
};

#endif 
