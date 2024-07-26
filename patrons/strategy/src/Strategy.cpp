#include <algorithm>
#include "Strategy.hpp"

std::string StrategyA::doAlgorithm( std::string_view data ) {
    std::string result( data );
    std::sort( std::begin(result), std::end(result), std::greater<>() );
    return result;
}

std::string StrategyB::doAlgorithm( std::string_view data ) {
    std::string result( data );
    std::sort( std::begin(result), std::end(result) );
    return result;
}
