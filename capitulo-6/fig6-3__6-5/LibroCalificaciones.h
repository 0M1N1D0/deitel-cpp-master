// Definición de la clase LibroCalificaciones que encuentra el máximo de tres
// calificaciones.
// Las funciones miembro están definidas en LibroCalificaciones.cpp

#include <iostream>

class LibroCalificaciones
{
    public:
        explicit LibroCalificaciones(std::string);
        void establecerNombreCurso(std::string);
        std::string obtenerNombreCurso() const;
        void mostrarMensaje() const;
        void recibirCalificaciones();
        void mostrarReporteCalificaciones() const;
        int maximo(int, int, int) const;

    private:
        std::string nombreCurso;
        int calificacionMaxima;
};