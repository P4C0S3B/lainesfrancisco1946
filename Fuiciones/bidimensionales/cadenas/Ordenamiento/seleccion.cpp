//busca el elemento mas pequeño de entre todos en el arreglo e intercalbiarlo con el de la primera posicion, una vez hecho eso, sigue con el valor consecutivo al numero cambiado//
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector (int num, int v[])
{
    srand(time(NULL));
    for(int i; i<num; i++)
    {
        //v[i]=rand()%20+1;//
        cin>>v[i];
    }
}

void verVector(int v[], int num)
{
    for (int i = 0; i<num; i++)
    {
        cout<<v[i]<<"\t";
    }
}

int ordenaSeleccion(int v[], int num)
{
    int contar=0, aux;
    bool bandera=true;
    for (int i=0; i<num-1; i++)
    {
        bandera = false;
        for(int j=i+1; j<num;j++)
        {
            contar++;
            if(v[i]>v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                bandera=true;
            }
        }
    }
    return contar;
}

main()
{
    int num, comparaciones;
    cout<<"Ingresa Nro de elementos del vector"<<endl;
    cin>>num;
    int vector[num];
    llenaVector(num, vector);
    cout<<"\nVector origial: "<<"\n";
    verVector(vector, num);
    comparaciones = ordenaSeleccion(vector, num);
    cout<<"\nVector ordenado: \n";
    verVector(vector,num);
    cout<<"\nEl numero de comparaciones es: "<<comparaciones<<endl;


}