#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dificultad(int dif)
{
    cout<<"Selecciona una dificultad: "<<endl;
    cout<<"1.- Principiante."<<endl;
    cout<<"2.- Intermedio."<<endl;
    cout<<"3.- Avanzado."<<endl;
    cin>>dif;
    while (dif<0 || dif>3)
    {
        cout<<"Opcion no valida."<<endl;  
        cin>>dif;
    }
    return dif;
}

void condicion(int dif)
{
    int ganar;
    int y = dificultad(dif);
    if(y == 1)
    {
        ganar = 0;
    } else if (y == 2)
    {
        ganar = 1;
    } else if(y == 3)
    {
        ganar = 2;
    }   
}
int seleccionjugador(int op)
{
    cout<<"Seleccione una de las opciones: "<<endl;
    cout<<"1.- Piedra."<<endl;
    cout<<"2.- Papel."<<endl;
    cout<<"3.- Tijera."<<endl;
    cin>>op;
    return op;
}
int generarmaquina()
{
    srand(time(NULL));
    int valorm = rand() % 3 + 1;
    if(valorm == 1)
    {
        cout << "La maquina ha elegido Piedra" << endl;
    } 
    else if (valorm == 2)
    {
        cout << "La maquina ha elegido Papel" << endl;
    } 
    else if (valorm == 3)
    {
        cout << "La maquina ha elegido Tijera" << endl;
    }
    return valorm;
}


void comparacion(int op)
{
    int x = generarmaquina();
    if(op== x)
    {
        cout<<"Empate"<<endl;
    }
}

main()
{
    int opcion,dif,valorm;
    cout<<"Piedra, papel o tijera"<<endl;

    condicion(dif);
    int seleccion = seleccionjugador(opcion);
    comparacion(seleccion);
}

//hice mi mejor esfuerzo inge :,(//