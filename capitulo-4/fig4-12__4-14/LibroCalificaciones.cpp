// Definiciones de funciones miembro para la clase LibroCalificaciones que resuelve
// el programa del promedio de la clase con repetición controlada por centinela.

#include <iostream>
#include <iomanip> // manipuladores de flujo parametrizados
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
        cerr << "El nombre \"" << nombre << "\" excede la longitud maxima. \n"
            << "Se limito a los primeros 25 caracteres.\n" << endl;
    }
}

string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const
{
    cout <<"Bienvenido al libro de calificaciones para \n" 
        << obtenerNombreCurso() 
        << "!" << endl;
}

void LibroCalificaciones::determinarPromedioClase() const
{
    unsigned int total = 0;
    unsigned int contadorCalificacion = 0;

    cout << "Escriba la calificacion (-1 para salir): ";
    int calificacion = 0;
    cin >> calificacion;

    while (calificacion != -1)
    {
        total += calificacion;
        contadorCalificacion++;

        cout << "Escriba la calificacion (-1 para salir): ";
        cin >> calificacion;
    }

    if (contadorCalificacion != 0)
    {
        double promedio = static_cast<double>(total) / contadorCalificacion;

        cout << "\nEl total de las " << contadorCalificacion 
            << " introducidas es: " << total << endl; 
        cout << setprecision(2) << fixed;
        cout << "El promedio de la clase es: " << promedio << endl;
    }
    else
    {
        cout << "No se introdujeron calificaciones." << endl;
    }
    
}