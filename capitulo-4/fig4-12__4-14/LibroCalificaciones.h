// Definición de la clase LibroCalificaciones que determina el promedio de una
// clase.
// Las funciones miembro se definen en LibroCalificaciones.cpp

#include <iostream>

class LibroCalificaciones
{
    public:
        explicit LibroCalificaciones(std::string);
        void establecerNombreCurso(std::string);
        std::string obtenerNombreCurso() const;
        void mostrarMensaje() const;
        void determinarPromedioClase() const;

    private:
        std::string nombreCurso;
};
