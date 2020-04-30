#include <iostream>
#include "../include/vector_t.hpp"
#include "../include/burbuja.hpp"
#include "../include/dni.hpp"
#include "../include/heapSort.hpp"
#include "../include/insercion.hpp"
#include "../include/quickSort.hpp"
#include "../include/shellSort.hpp"


using namespace std;

void demostracion() {

    int metodo, size;
    
    cout << "Introduzca el método a usar: \n1. Inserción\n2. Burbuja\n3. HeapSort\n4.QuickSort\n5. ShellSort\n";
    cin >> metodo;

    cout << "Introduzca el tamaño del vector entre 1 y 25" << endl;
    cin >> size;
    while (size > 25 || size < 1) {
        cout << "ERROR: El tamaño introducido está fuera del rango establecido. Introduzca un tamaño menor que 25 y mayor que 1" << endl;
        cin >> size;
    }

    vector_t<dni> vClave(size);
    for (int i = 0; i < size; i++) {
        vClave[i] = dni();
    }

    vector_t<dni> vNuevo(size);

    switch (metodo)
    {
    case 1:

        cout <<"\nMétodo de inserción" << endl;
        vClave.write(cout);
        
        insercion(vClave, size);
        cout << "Vector ordenado\n";
        vClave.write(cout);
        break;
    
    case 2:

        cout << "\nMétodo burbuja" << endl;
        vClave.write(cout);
        burbuja(vClave, size);
        cout << "vector ordenado\n" << endl;
        vClave.write(cout);
        
        break;

    case 3:

        cout << "\nMétodo HeapSort" << endl;
        vClave.write(cout);
        heapSort(vClave, size);
        cout << "vector ordenado\n" << endl;
        vClave.write(cout);
        
        break;

    case 4:

        cout << "\nMétodo quickSort" << endl;
        vClave.write(cout);
        quickSort(vClave, 0, size-1);
        cout << "vector ordenado\n" << endl;
        vClave.write(cout);
        
        break;

    case 5:

        float alfa;
        cout << "\nMétodo shellSort" << endl;
        cout << "Introduzca el valor de alfa (0 < alfa < 1)" << endl;
        cin >> alfa;
        vClave.write(cout);
        shellSort(vClave, alfa, size-1);
        cout << "vector ordenado\n" << endl;
        vClave.write(cout);
        
        break;
    default:
        break;
    }
}

void estadistica() {

}



int main() {

    int modo;

    
    cout << "\nIntroduzca el modo que desea usar\n1. Demostración\n2. Estadística" << endl;
    cin >> modo;

    if (modo == 1) {
        cout << "Demostración" << endl;
        demostracion();

    } else if (modo == 2) {
        cout << "Estadística" << endl;
        estadistica();

    } else {
        cout << "ERROR" << endl;
        return 0;
    }


    



  















    return 0;
}

