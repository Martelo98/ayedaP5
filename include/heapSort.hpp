#include "vector_t.hpp"


template<class clave>
void baja(int i, vector_t<clave>& vClave, int size) {
    int h1, h2, h;

    while (2 * i <= size) {
        h1 = 2*i;
        h2 = h1 + 1;
        if (h1 == size) {
            h = h1;
        }
        else if (vClave[h1] > vClave[h2]) {
            h = h1;
            else {
                h = h2;
            }
        }
        if (vClave[h] <= vClave[i]) { 
            break;
        }
        else {
            swap(vClave[i], vClave[h]);
            i = h;
        }
    }
}
template<class clave>
void heapSort(vector_t<clave>& vClave, int size) {

    for (int i = size / 2; i > 0; i--) {
        baja(i, vClave, size);

    }

    for (int i = n; i > 1; i--) {
        swap(vClave[1], vClave[i]);
        baja(1, vClave, i-1);
    }
    
}