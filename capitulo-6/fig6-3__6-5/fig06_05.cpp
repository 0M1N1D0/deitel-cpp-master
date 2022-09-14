// Crea un objeto LibroCalificaciones, introducir calificaciones y mostrar
// reporte.

#include "LibroCalificaciones.h"

int main()
{
    LibroCalificaciones miLibroCalificaciones = LibroCalificaciones("CS101 Programación en C++");

    miLibroCalificaciones.mostrarMensaje();
    miLibroCalificaciones.recibirCalificaciones();
    miLibroCalificaciones.mostrarReporteCalificaciones(); 
}