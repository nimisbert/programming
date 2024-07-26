#ifndef STRATEGY_HPP
#define STRATEGY_HPP

#include <string>

/* Objet virtuel des strategies (mere/interface) */
class Strategy
{
public:
    virtual ~Strategy() = default;
    virtual std::string doAlgorithm(std::string_view data) const = 0;
};

/* Objet concret de strategie (fille) */
class StrategyA : Strategy 
{
public:
    std::string doAlgorithm( std::string_view data );
};

class StrategyB : Strategy
{
public:
    std::string doAlgorithm( std::string_view data );
};

#endif
