#include <iostream>
#include <cstdio>
#include <thread>
#include "Singleton.hpp"

void threadFunctionFoo( void ) {
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    Singleton *singleton = Singleton::getInstance("Foo");
    std::cout << "(Foo) value = " << singleton->getValue() << "\n";
}

void threadFunctionBar( void ) {
    std::this_thread::sleep_for(std::chrono::milliseconds(2));
    Singleton *singleton = Singleton::getInstance("Bar");
    std::cout << "(Bar) value = " << singleton->getValue() << "\n";
}

int main( void ) {
    std::thread threadFoo( threadFunctionFoo );
    std::thread threadBar( threadFunctionBar );
    threadFoo.join();
    threadBar.join();
    return 0;
}
