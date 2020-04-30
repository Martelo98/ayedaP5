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
void shellSort(vector_t<clave>& vClave, float alfa, int size) {

  /*  if (esValido == false) {
        cout << "\nERROR: Alfa no es un valor válido [0 < alfa < 1]" << endl;
        
    }   

    */
    
    int delta = size; 
    
    while (delta > 1) {
    
        delta = (alfa * size) / 2;
        deltaSort(delta, vClave, size);

    }

}


template<class clave>
void deltaSort (int delta, vector_t<clave>& vClave, int n) {
    for (int i = delta; i < n; i++) {
        clave aux = vClave[i];
        int j = i;
        while((j >= delta) && (aux < vClave[j-delta])) {
            vClave[j] = vClave[j-delta];
            j = j - delta;

        }
        vClave[j] = aux;
    }
}