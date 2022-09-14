// Programa de prueba de la plantilla de función maximo.

#include <iostream>
#include "maximo.h"

using namespace std;

int main()
{   
    // demostración con datos int
    int int1, int2, int3;

    cout << "Introduzca tres enteros: ";
    cin >> int1 >> int2 >> int3;

    // invoca a la funcion 
    cout << "El valor maximo int es: " << maximo(int1, int2, int3) << endl;

    // demostración con datos double 
    double double1, double2, double3;

    cout << "Introduzca tres doubles: ";
    cin >> double1 >> double2 >> double3;

    // invoca a la funcion
    cout << "El valor maximo double es: " << maximo(double1, double2, double3) << endl;
}