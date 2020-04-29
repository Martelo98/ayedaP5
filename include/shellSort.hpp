#include "vector_t.hpp"



bool esValido(float alfa) {

    if ((alfa > 0) && (alfa < 1)) {
        return true;
    }
    else {
        return false;
    }
}


template<class clave>
void shellSort(vector_t<clave>& vClave, float alfa) {

    if (esValido == false) {
        cout << "\nERROR: Alfa no es un valor válido [0 < alfa < 1]" << endl;
        return 0;
    }   

    
    int vSize = vClave.size();
    int delta = vSize; 
    
    while (delta > 1) {
    
        delta = (alfa * vSize) / 2;
        deltaSort(delta, vClave, vSize);

    }

}


template<class clave>
void deltaSort (int delta, vector_t<clave>& vClave, int n) {
    for (int i = delta; i < n; i++) {
        int aux = vClave[i];
        int j = i;
        while((j >= delta) && (aux < vClave[j-delta])) {
            vClave[j] = vClave[j-d];
            j = j - d;

        }
        vClave[j] = aux;
    }
}