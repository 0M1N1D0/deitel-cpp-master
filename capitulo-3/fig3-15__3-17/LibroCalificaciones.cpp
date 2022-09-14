// Implementaciones de las definiciones de las funciones miembro de
// LibroCalificaciones.
// La función establecerNombreCurso realiza la validación.

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre)
{
    establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    if (nombre.size() <= 25) nombreCurso = nombre;
    else
    {
        nombreCurso = nombre.substr(0, 25);
        cerr << "El nombre \"" << nombre << "\" excede la longitud maxima de 25 caracteres.\n"
            "Se limito a los primeros 25 caracteres.\n" << endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const 
{
    cout << "Bienvenido al libro de calificaciones para \n" << obtenerNombreCurso() << "!" << endl;
}