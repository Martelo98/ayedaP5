#include "../include/dni.hpp"


using namespace std;


dni::dni() {
    dniValor_ = rand() % 100000000;
}

dni::~dni() {}

unsigned long dni::getValor() {
    
    return dniValor_;

}

dni::operator unsigned long() const  {
    
    return dniValor_; 
}

bool dni::operator== (dni& numero) {
    
}