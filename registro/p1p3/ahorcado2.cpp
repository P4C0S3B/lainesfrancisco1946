#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ahorcadoop.h"
using namespace std;

string palabraAleatoria(string palabras[])
{
    int numero = rand() % 5;
    return palabras[numero];
}

int opciones()
{
    int op;
    cout << "1.- Deportes" << endl;
    cout << "2.- Animales" << endl;
    cout << "3.- Frutas" << endl;
    cout << "4.- Paises" << endl;
    cin >> op;
    return op;
}

void dibujoAhorcado(int intentos)
{
    if(intentos == 6)
    {
        cout << "   " << endl;
        cout << "   " << endl;
        cout << "   " << endl;
    } else if(intentos == 5)
    {
        cout << " O " << endl;
        cout << "   " << endl;
        cout << "   " << endl;
    } else if(intentos == 4)
    {
        cout << " O " << endl;
        cout << " | " << endl;
        cout << "   " << endl;
    } else if(intentos == 3)
    {
        cout << " O " << endl;
        cout << "/| " << endl;
        cout << "   " << endl;
    } else if(intentos == 2)
    {
        cout << " O " << endl;
        cout << "/|\\" << endl;
        cout << "   " << endl;
    } else if(intentos == 1)
    {
        cout << " O " << endl;
        cout << "/|\\" << endl;
        cout << "/  " << endl;
    } else
    {
        cout << " O " << endl;
        cout << "/|\\" << endl;
        cout << "/ \\" << endl;
    }
}

void jAhorcado(string palabra)
{
    int intentos = 6;
    string oculta(palabra.size(), '-');
    bool encontrada;
    char letra;

    while (intentos > 0 && oculta != palabra)
    {
        
        system("pause");
        system("cls");
        dibujoAhorcado(intentos);
        cout << "Ahorcado: " << oculta << endl;
        cout << "Intentos restantes: " << intentos << endl;
        cout << "Introduce una letra: ";
        cin >> letra;

        encontrada = false;
        for (int i = 0; i < palabra.size(); i++)
        {
            if (letra == palabra[i])
            {
                oculta[i] = letra;
                encontrada = true;
            }
        }
        if (!encontrada)
        {
            intentos--;
            cout << "Letra no encontrada. Te quedan: " << intentos << " intentos restantes." << endl;
        }
    }
    system("pause");
    system("cls");
    if (intentos == 0)
    {
        dibujoAhorcado(intentos);
        cout << "Has perdido. La palabra era: " << palabra << endl;
    }
    else
    {
        dibujoAhorcado(intentos);
        cout << oculta << endl;
        cout << "Felicidades, has acertado la palabra";
    }
}

int main()
{
    srand(time(NULL));
    string palabra[5], palabraSeleccionada;
    int op;
    op = opciones();
    if (op == 1)
        deportes(palabra);
    else if (op == 2)
        animales(palabra);
    else if (op == 3)
        frutas(palabra);
    else if (op == 4)
        paises(palabra);
    else
    {
        cout << "Opción no válida." << endl;
        return 0;
    }

    palabraSeleccionada = palabraAleatoria(palabra);
    jAhorcado(palabraSeleccionada);

    return 0;
}
