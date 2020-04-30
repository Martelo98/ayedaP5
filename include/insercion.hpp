#include "vector_t.hpp"

template <class clave>
void insercion(vector_t<clave>& vClave, int size) {
    
    int j;
    clave aux;
    int numero;

    for (int i = 1; i < size; i++) {
        j = i;
        aux = vClave[i];

        while (aux < vClave[j-1]) {
            
            vClave[j] = vClave[j-1];
            j--;
        }
        vClave[j] = aux;
    }
}