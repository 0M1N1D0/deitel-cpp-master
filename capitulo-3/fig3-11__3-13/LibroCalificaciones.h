// Definición de la clase LibroCalificaciones. Este archivo presenta la interfaz
// public de LibroCalificaciones sin revelar las implementaciones de sus funciones
// miembro, que están definidas en LibroCalificaciones.cpp.

#include <string>

// definicion de la interfaz de la clase 
class LibroCalificaciones
{
    public:
        // contructor
        explicit LibroCalificaciones(std::string);
        // setter 
        void establecerNombreCurso(std::string);
        // getter
        std::string obtenerNombreCurso() const;
        // metodo
        void mostrarMensaje() const;

    private:
        std::string nombreCurso;
};