#include "../include/vector_t.hpp"
#include "../include/contador.hpp"


contador::contador() {

}

contador::~contador() {

}

int contador::getValor() {
    
    return numero_;
}

void contador::resetear() {
    numero_ = 0;
}

void contador::incrementar() {
    numero_++;
}

void contador::disminuir() {
    if (numero_ > 0)
    numero_--;
    else
    numero_ = 0;
    
}