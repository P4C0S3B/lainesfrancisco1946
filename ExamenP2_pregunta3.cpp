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

int puntosMaquina(int dif)
{
    int ventaja = 0;
    if(dif == 1)
    {
        ventaja;
    } else if (dif==2)
    {
        ventaja=1;
    } else if(dif==3)
    {
        ventaja=2;
    }
    return ventaja;
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


void comparacion(int jugador, int maquina)
{
    int puntosjugador=0, puntosmaquina=0;
    if (jugador == maquina) {
        cout << "Empate" << endl;
    } else if ((jugador == 1 && maquina == 3) || (jugador == 2 && maquina == 1) || (jugador == 3 && maquina == 2)) {
        cout << "Has ganado." << endl;
        puntosjugador++;
    } else {
        cout << "La maquina gana." << endl;
        puntosmaquina++;  
    }
}


main()
{

}

//hice mi mejor esfuerzo inge :,(//