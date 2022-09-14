// Definición de la clase LibroCalificaciones presenta la interfaz public
// de la clase. Las definiciones de las funciones miembro aparecen en
// LibroCalificaciones.cpp.

#include <string>

class LibroCalificaciones
{
    public:
        explicit LibroCalificaciones(std::string);
        void establecerNombreCurso(std::string);
        std::string obtenerNombreCurso() const;
        void mostrarMensaje() const;

    private:
    std::string nombreCurso;
};