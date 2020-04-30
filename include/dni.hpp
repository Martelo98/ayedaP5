#include <iostream>
#include <cmath>
#include "../include/contador.hpp"

using namespace std;


class dni {

    private: 

        unsigned long dniValor_;

    public:

    dni();
    ~dni();

    //getters
    unsigned long getValor();

    //operadores
    operator unsigned long() const;

    bool operator== (dni& numero);
    bool operator!= (dni& numero);
    bool operator> (dni& numnero);
    bool operator>= (dni& numero);
    bool operator< (dni& numnero);
    bool operator<= (dni& numero);
    
    static contador cuenta;
};