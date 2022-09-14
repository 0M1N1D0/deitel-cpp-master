// Programa que muestra la suma de dos enteros

#include <iostream>

int main()
{
    // declaraciones de variables 
    int numero1 = 0;
    int numero2 = 0;
    int suma = 0;

    // int numero1 = 0, numero2 = 0, suma = 0;

    // petición de datos al usuario
    std::cout << "Escriba el primer entero: ";
    std::cin >> numero1;

    std::cout << "Escriba el segundo entero: ";
    std::cin >> numero2;

    suma = numero1 + numero2;

    std::cout << "La suma es: " << suma << std::endl;
}