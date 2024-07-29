#ifndef STRATEGY_HPP
#define STRATEGY_HPP

/**
 * Classes abstraite, interface strategy
 * doAlgorithm, polymorphisme de calcul de deux integers.
 **/

class Strategy
{
public:
    Strategy() = default;
    virtual ~Strategy() = default;
    virtual int doAlgorithm( int a, int b ) const = 0;
};

/**
 * Classes concretes, implementation de strategy de calcul.
 * StrategyA, polymorphisme doAlgorithm est une addition.
 * StrategyB, polymorphisme doAlgorithm est une soustraction.
 **/

class StrategyA : public Strategy
{
public:
    StrategyA() = default;
    ~StrategyA() = default;
    int doAlgorithm( int a, int b ) const override;
};

class StrategyB : public Strategy 
{
public:
    StrategyB() = default;
    ~StrategyB() = default;
    int doAlgorithm( int a, int b ) const override;
};

#endif
