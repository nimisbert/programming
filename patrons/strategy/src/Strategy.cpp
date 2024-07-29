#include <algorithm>
#include "Strategy.hpp"

int StrategyA::doAlgorithm( int a, int b ) const {
    return a + b;
}

int StrategyB::doAlgorithm( int a, int b ) const {
    return a - b;
}
