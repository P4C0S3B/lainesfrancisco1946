#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int dificultad()
{
    int dif;
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
    if (dif==2)
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
    while (op<1 || op>3)
    {
        cout<<"Opcion no valida.Selecciona una de las opciones propuestas.";
        cin>>op;
    }
    return op;
}

int generarmaquina()
{
    
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

int comparacion(int op, int maquina)
{
    if (op == maquina) {
        cout << "Empate" << endl;
        return 0;
    } else if ((op == 1 && maquina == 3) || (op == 2 && maquina == 1) || (op == 3 && maquina == 2)) {
        cout << "Has ganado esta ronda." << endl;
        return 1;
    } else {
        cout << "La maquina gana esta ronda." << endl;
        return -1;
    }
}

void conteoPuntos(int ventaja)
{
    int pMax = 5 - ventaja, conteoPuntosJugador = 0, conteoEmpates = 0;
    int nEmpates = 0, nVictoriasJ = 0, nVictoriasM = ventaja;
    int nRondas = 0;
    cout << "Rondas a jugar: " << pMax << endl;
    while (nRondas < pMax)
    {
        int op = seleccionjugador(op);
        int selecM = generarmaquina();
        int resultado = comparacion(op, selecM);    
        if (resultado == 0)
        {
            conteoEmpates++;
            nEmpates = conteoEmpates;
        } 
        else if (resultado == 1)
        {
            conteoPuntosJugador++;
            nVictoriasJ = conteoPuntosJugador;
        } 
        else if (resultado == -1)
        {
            nVictoriasM++;
        }
        nRondas++;
    }

    cout << "Resultados: " << endl;
    cout << "Puntos del jugador: " << nVictoriasJ << endl;
    cout << "Puntos de la maquina: " << nVictoriasM << endl;
    cout << "Empates: " << nEmpates << endl;

    if (nVictoriasJ == nVictoriasM)
    {
        cout << "El juego termina en empate." << endl;
    } 
    else if (nVictoriasJ > nVictoriasM)
    {
        cout << "Ganaste!!" << endl;
    } 
    else 
    {
        cout << "La maquina gana este juego. Mejor suerte para la próxima." << endl;
    }
}

main()
{
    srand(time(NULL));
    int opcion, valorm;
    cout<<"Piedra, papel o tijera."<<endl;
    int dif = dificultad();
    int ventaja = puntosMaquina(dif);
    cout<<"La maquina inicia con "<<ventaja<<" puntos de ventaja."<<endl;
    conteoPuntos(ventaja);
}