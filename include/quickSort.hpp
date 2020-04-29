#include "vector_t.hpp"


template <class clave>
void quickSort(vector_t<clave>& vClave, int ini, int fin) {

    int i = ini, f = fin;
    int p = vClave[(i+f)/2];

    while (i <= f) {
        while (vClave[i] < p)
            i++;
        while (vClave[f] > p)
            f--;

        if (i <= f) {
            swap(vClave[i], vClave[f]);
            i++;
            f--;

        }
    }

    if (ini < f) quickSort(vClave, ini, f);
    if (i < fin) quickSort(vClave, i, fin);
}