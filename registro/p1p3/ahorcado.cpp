#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ahorcadoop.h"
using namespace std;

string palabraAleatoria(string palabras[])
{
    srand(time(NULL));
    int numero = rand() % 5;
    return palabras[numero];
}

int opciones(){
    int op;
    cout << "1.- Deportes" << endl;
    cout << "2.- Animales" << endl;;
    cout << "3.- Frutas" << endl;
    cout << "4.- Paises" << endl;
    cin >> op;
    return op;
}

void jAhorcado(string palabra)
{
    int intentos = 6;
    string oculta(palabra.size(), '-');
    bool encontrada;
    char letra;

    while(intentos > 0 && oculta != palabra)
    {
        cout << "Ahorcado: " << oculta << endl;
        cout << "Intentos: " << intentos << endl;
        cout << "Letra: ";
        cin >> letra;
        
        encontrada = false;
        for(int i = 0; i < palabra.size(); i++) 
        {
            if(letra == palabra[i])
            {
                
                oculta[i] = letra;
                encontrada = true;
            }
            if(!encontrada)
            {
                intentos--;
                cout << "Letra no encontrada" << endl;
            }
        }
    }
}
main()
{
    string palabra[5], palabraSeleccionada;
    int op;
    op = opciones();
    if (op == 1) deportes(palabra);
    else if (op == 2) animales(palabra);
    else if (op == 3) frutas(palabra);
    else if (op == 4) paises(palabra);
    palabraSeleccionada = palabraAleatoria(palabra);
    jAhorcado(palabraSeleccionada);



}