// Un jugador tira dos dados. Cada dado tiene seis caras, las cuales contienen 1, 2, 3, 4, 5 y 6 puntos negros.
// Una vez que los dados dejan de moverse, se calcula la suma de los puntos negros en las dos caras superiores.
// Si la suma es 7 u 11 en el primer tiro, el jugador gana. Si la suma es 2, 3 o 12 en el primer tiro (llamado
// “craps”), el jugador pierde (es decir, la “casa” gana). Si la suma es 4, 5, 6, 8, 9 o 10 en el primer tiro, esta
// suma se convierte en el “punto” del jugador. Para ganar, el jugador debe seguir tirando los dados hasta que
// salga otra vez “su punto”. El jugador pierde si tira un 7 antes de llegar a su punto.

// Simulación del juego de "craps"

#include <iostream>
#include <cstdlib>  
#include <ctime>

using namespace std;

// prototipo de funcion
unsigned int tirarDados();

int main()
{
    // enumeracion con constantes para los estados del juego 
    enum Estado {CONTINUAR, GANO, PERDIO};
    // randomización
    srand(static_cast<unsigned int>(time(0)));

    unsigned int miPunto{0}; 
    Estado estadoJuego = CONTINUAR;
    unsigned int sumaDeDados = tirarDados();

    switch (sumaDeDados)
    {   
        case 7:
        case 11:
            estadoJuego = GANO;
            break;

        case 2:
        case 3:
        case 12:
            estadoJuego = PERDIO;
            break;

        default:
            estadoJuego = CONTINUAR;
            miPunto = sumaDeDados;
            cout << "El punto es " << miPunto << endl;
            break;
    }

    while (CONTINUAR == estadoJuego)
    {
        sumaDeDados = tirarDados();

        if (sumaDeDados == miPunto) estadoJuego = GANO;
        else if (sumaDeDados == 7) estadoJuego = PERDIO;
    }

    if (GANO == estadoJuego) cout << "El jugador gana." << endl;
    else cout << "El jugador pierde." << endl;

}

unsigned int tirarDados()
{
    unsigned int dado1 = 1 + rand() % 6;
    unsigned int dado2 = 1 + rand() % 6;

    unsigned int suma = dado1 + dado2;

    cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << suma << endl;

    return suma;
}