// probando setpresition() y fixed de la 
// librería <iomanip>

#include <iostream>
#include <iomanip>

int main()
{
    double x = 43.123654;

    std::cout << "Valor de x sin setprecision: " << x << std::endl;
    std::cout << std::setprecision(2) << std::fixed; // fixed evita el truncamiento
    std::cout << "Valor de x con setprecision: " << x << std::endl; 
}

// mensaje de prueba