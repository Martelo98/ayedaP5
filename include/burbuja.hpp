#include "vector_t.hpp"

template <class clave>
void burbuja(vector_t<clave>& vClave, int size) {
    
    clave aux;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {

            if (vClave[j] > vClave[j+1]) {
                aux = vClave[j];
                vClave[j] = vClave[j+1];
                vClave[j+1] = aux;
            }
        }        
    }
}