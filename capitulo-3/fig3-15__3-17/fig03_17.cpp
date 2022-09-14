// Crea y manipula un objeto LibroCalificaciones; ilustra la validación.

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones libroCalificaciones1("CS101 Introduccion a la programacion en C++");
    LibroCalificaciones libroCalificaciones2("CS102 Estructuras de datos en C++.");

    cout << "Nombre inicial del libroCalificaciones1: " << libroCalificaciones1.obtenerNombreCurso() << endl;
    cout << "Nombre inicial del libroCalificaciones2: " << libroCalificaciones2.obtenerNombreCurso() << endl;

    libroCalificaciones2.establecerNombreCurso("CS102 Estructuras en C++.");

    cout << "Nombre final del libroCalificaciones1: " << libroCalificaciones1.obtenerNombreCurso() << endl;
    cout << "Nombre final del libroCalificaciones2: " << libroCalificaciones2.obtenerNombreCurso() << endl;
}
