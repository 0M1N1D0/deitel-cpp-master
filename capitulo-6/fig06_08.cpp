// Enteros desplazados y escalados, producidos por 1 + rand() % 6.

#include <iostream>
#include <cstdlib> // rand()
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    for (unsigned int contador = 1; contador <= 20; ++contador)
    {
        cout << setw(10) << (1 + rand() % 6);

        if (contador % 5 == 0) cout << endl;
    }
}

