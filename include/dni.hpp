#include <iostream>
#include <cmath>

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
    
    







};