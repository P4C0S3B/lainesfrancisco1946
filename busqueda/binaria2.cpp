#include <iostream>
#include <stdlib.h>
#include <time.h>
//#include "../Fuiciones/bidimensionales/cadenas/Ordenamiento/inserccion2.cpp" //para llamar elmetodo de ordenamiento de un archivo externo//
using namespace std;

void llenarVector (int v[], int ne)
{
    for(int i = 0; i<ne ; i++)
    {
        v[i] = rand()%20+1;
    }

}

void verDatos(int v[], int ne)
{
    for(int i =0; i<ne;i++)
    {
        cout<<v[i]<<"\t";
    }
    cout<<endl;
}
int ordenInserccion(int v[], int ne){
    int contar = 0, aux;
    for(int i=1;i<ne;i++){
        aux = v[i];
        int j  = i - 1;
        while (j >= 0){
            contar++;
            if(aux < v[j]){
                v[j+1]=v[j];
                v[j] = aux;
            }
            j--;
        }
    }
    return contar;
}


bool isBusquedaBInaria(int v[], int ne, int elemento)
{
    int Iabajo=0, Iarriba=ne-1, Icentro;
    Icentro=(Iarriba+Iabajo)/2;
    while(Iabajo<Iarriba)
    {
        if(Icentro == elemento)
        {
            return true;
        } else if(elemento < Icentro)
        {
            Iarriba=Icentro-1;
            return true;
        } else if(elemento > Icentro)
        {

            Iabajo=Icentro+1;
            return true;
        }
    }
    return false;
}


main()
{
    srand(time(NULL));
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