// programa que realiza y muestra la tabla 
// de multiplicar indicada por el usuario

#include <iostream>

using namespace std;

// prototipo de funciones
void pedirDatos();
void hacerTabla(int, int);


int main()
{
    pedirDatos();
}


// definicion de funciones
void pedirDatos()
{
    unsigned int tabla;
    unsigned int limite;


    cout << "Tabla de multiplica a mostrar (entero positivo): ";
    cin >> tabla;
    cout << "Limite de la tabla (entero positivo): ";
    cin >> limite;

    hacerTabla(tabla, limite);
}

void hacerTabla(int tabla, int limite)
{
    for (unsigned int contador = 1; contador <= limite; contador++)
    {
        cout << tabla << " * " << contador << " = " <<  tabla * contador << endl;
    }
}