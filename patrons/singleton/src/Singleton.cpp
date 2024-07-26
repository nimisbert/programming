#include "Singleton.hpp"

Singleton *Singleton::instance = nullptr;
std::mutex Singleton::mutex;

Singleton::Singleton( const std::string value ) {
    this->value = value;
}

Singleton *Singleton::getInstance( const std::string &value ) {
    std::lock_guard<std::mutex> lock( mutex );
    if( instance == nullptr ) {
        instance = new Singleton(value);
    }
    return instance;
}

std::string Singleton::getValue( void ) {
    return this->value;
}
