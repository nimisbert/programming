#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <string>
#include <mutex>

class Singleton 
{
private:
    static Singleton *instance;
    static std::mutex mutex;

protected:
    Singleton( const std::string value );
    ~Singleton();
    std::string value;

public:
    /* Supprime clonage de l'objet */
    Singleton(Singleton &other) = delete;
    /* Supprime assignation de l'objet */
    void operator = (const Singleton &) = delete;
    
    static Singleton *getInstance( const std::string &value );
    std::string getValue( void );

};

#endif 
