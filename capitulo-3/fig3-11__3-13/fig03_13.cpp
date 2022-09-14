// Demostración de la clase LibroCalificaciones después de separar
// su interfaz de su implementación.

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones libroCalificaciones1("CS101 Introducción a la programación en C++");
    LibroCalificaciones libroCalificaciones2("CS102 Estructura de datos en C++");

    cout << "libroCalificaciones1 creado para el curso: " << libroCalificaciones1.obtenerNombreCurso() << endl;
    cout << "libroCalificaciones2 creado para el curso: " << libroCalificaciones2.obtenerNombreCurso() << endl;  
}