// Crea un objeto LibroCalificaciones e invoca a su función
// determinarPromedioClase.

#include "LibroCalificaciones.h"

int main()
{
    LibroCalificaciones miLibroCalificaciones("CS101 Programación en C++");

    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.determinarPromedioClase();
}