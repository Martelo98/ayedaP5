#include "vector_t.hpp"

template<class clave>
void heapSort(vector_t<clave>& vClave) {

    int half = vClave.size() / 2;
    int aux = 0;
    for (int i = half; i > 0; i/= 2) {
        for (int j = i; j < vClave.size(); i++) {
            aux = vClave[j];

            for (int k = j; k >= half && vClave[k - half] > aux; j -= half) {
                
                vClave[k] = vClave[j - half];
            }
            vClave[k] = aux;
        }
    }
    
}