#include <iostream>
#include <stdlib.h>
#include <time.h>
#define MAX 20  
using namespace std;

void llenarTabla (int tabla[][MAX], int dim)
{
    srand(time(NULL));
    cout<<"La matriz de dimension "<<dim<<"x"<<dim<<" es: "<< endl;
    for (int fil=0; fil<dim; fil++)
    {
        for (int col=0; col<dim; col++)
        {
            tabla[fil][col]= rand() % 11 + 10;
        }
    }

}

void verTabla (int tabla [][MAX], int dim)
{
    for (int fil=0; fil<dim; fil++)
    {
        for (int col=0; col<dim; col++)
        {
            cout<<tabla[fil][col]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

int DPrincipal (int tabla[][MAX], int dim)
{
    int contadorD1=0, sumaD1=0;
    for (int fil=0; fil<dim; fil++)
    {
        for (int col=0; col<dim; col++)
        {
            if (fil==col)
            {
                contadorD1 = tabla[fil][col];
                sumaD1 = sumaD1 + contadorD1;
            }
        }
    }
    cout<<"El valor de la suma de los elementos de la diagonal principal es: "<<sumaD1<<endl;
    return sumaD1;
}

int Dsecundaria(int tabla [][MAX], int dim)
{
    int contadorD2=0, sumaD2=0;
    for (int fil=0; fil<dim; fil++)
    {
        for (int col=0; col<dim; col++)
        {
            if (fil+col==dim-1)
            {
                contadorD2 = tabla[fil][col];
                sumaD2 = sumaD2 + contadorD2;
            }
        };
    }
    cout<<"El valor de la suma de los elementos de la diagonal secundaria es: "<<sumaD2<<endl;
    return sumaD2;
}

void sumadiagonales (int tabla [][MAX], int dim)
{
    int valordiagonalP = DPrincipal(tabla, dim);
    int valorDiagonalS = Dsecundaria(tabla, dim);
    int sumadiagonales = 0;
    sumadiagonales = valordiagonalP + valorDiagonalS;
    cout<<"El valor de la suma de las diagonales es: "<<sumadiagonales<<endl;
    
}
void comparardiagonales(int tabla[][MAX], int dim)
{
    int valordiagonalP = DPrincipal(tabla, dim);
    int valorDiagonalS = Dsecundaria(tabla, dim);
    if (valordiagonalP>valorDiagonalS)
    {
        cout<<"El valor de la diagonal principal es mayor que el valor de la diagonal secundaria."<<endl;
    } else if (valordiagonalP<valorDiagonalS)
    {
        cout<<"El valor de la diagonal secundaria es mayor que el valor de la diagonal principal."<<endl;
    } else 
    {
        cout<<"Ambas diagonales tienen el mismo valor."<<endl;
    }
}

void solodiagonales(int tabla[][MAX], int dim)
{
    cout<<"La matriz unicamente con los valores de las diagonales: "<<endl;
    for(int fil=0; fil<dim; fil++)
    {
        for(int col=0; col<dim; col++)
        {
            if (fil==col || fil+col==dim-1)
            {
                cout<<tabla[fil][col]<<"\t";
            } else
            {
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}

main()
{
    int tabla [MAX][MAX], dimension;
    cout<<"Ingrese la dimension de la matriz cuadrada: ";
    cin>>dimension;
    while(dimension>20)
    {
        cout<<"La dimension excede el maximo limite permitido. Por favor ingrese un valor mas bajo."<<endl;
        cin>>dimension;
    }
    llenarTabla(tabla, dimension);
    verTabla(tabla, dimension);
    sumadiagonales(tabla, dimension);
    comparardiagonales(tabla, dimension);
    solodiagonales(tabla, dimension);
}