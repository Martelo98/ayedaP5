#include "vector_t.hpp"

template <class clave>
void insercion(vector_t<clave>& vClaves/*, int tamaño*/) {
    
    
    for (int i = 0; i < vClaves.size() - 1; i++) {

        int j = i - 1;
        clave dato = vClaves[i];
        while ((vClaves[j] > dato) && (j >= 0)) {
           
            vClaves[j+1] = vClaves[j];
            j--; 
        }
        vClaves[j+1] = dato;
    }
}