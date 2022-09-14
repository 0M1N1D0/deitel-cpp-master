// Definiciones de las funciones miembro de LibroCalificaciones. Este archivo contiene
// implementaciones de las funciones miembro cuyo prototipo está en LibroCalificaciones.h.

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

// constructor
LibroCalificaciones::LibroCalificaciones(string nombre) 
{
    nombreCurso = nombre;
}

// setter
void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    nombreCurso = nombre;
}

// getter
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

// metodo
void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
        << "!" << endl;
}


