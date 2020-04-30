#include "../include/dni.hpp"
//#include "../include/contador.hpp"

using namespace std;

contador dni::cuenta;

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
    if (dniValor_ == numero.dniValor_) {
        return true;
    }
    else {
        return false;
    }
}

bool dni::operator!= (dni& numero) {
    if (dniValor_ != numero.dniValor_) {
        return true;
    }
    else {
        return false;
    }
}

bool dni::operator> (dni& numero) {
    if (dniValor_ > numero.dniValor_) {
        return true;
    }
    else {
        return false;
    }
}

bool dni::operator>= (dni& numero) {
    if (dniValor_ >= numero.dniValor_) {
        return true;
    }
    else {
        return false;
    }
}

bool dni::operator< (dni& numero) {
    if (dniValor_ < numero.dniValor_) {
        return true;
    }
    else {
        return false;
    }
}

bool dni::operator<= (dni& numero) {
    if (dniValor_ <= numero.dniValor_) {
        return true;
    }
    else {
        return false;
    }
}