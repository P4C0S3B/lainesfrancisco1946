#include <iostream>
#include <stdlib.h>
#include <time.h>
//#include "../Fuiciones/bidimensionales/cadenas/Ordenamiento/inserccion2.cpp" //para llamar elmetodo de ordenamiento de un archivo externo//
#include "../librerias/arrays.h"
using namespace std;
using namespace vector;
bool isBusquedaBInaria(int v[], int ne, int elemento)
{
    int Iabajo=0, Iarriba=ne-1, Icentro;
    while(Iabajo<Iarriba)
    {
        if(v[Icentro] == elemento)
        {
            return true;
        } else if(v[Icentro] < Icentro)
        {
            Iabajo= Icentro+1;
        } else 
        {
            Iarriba=Icentro-1;
        }
    }
    return false;
}

main()
{
    //srand(time(NULL));//
    int numElem, dato;
    cout<<"Ingrese el numero de elementos: ";
    cin>>numElem;
    int vec[numElem];
    llenarVector(vec, numElem);
    verDatos(vec, numElem);

    cout<<"Vector ordenado: "<<endl;
    ordenInserccion(vec, numElem);
    verDatos(vec, numElem);

    cout<<"Ingrese el dato a buscar: ";
    cin>>dato;
    (isBusquedaBInaria(vec, numElem, dato))? cout<<"Dato encontrado.":cout<<"Dato no encontrado.";
    
}