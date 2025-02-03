//El metodo de insercion es un algoritmo usado para ordenar listas, su funcionamiento consiste en el recorrido por lista seleccionadno en cada iteracio//
//un valor como clave y comparandolo con el resto insertandolo en el lugar correspondiente//
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector (int num, int v[])
{
    srand(time(NULL));
    for(int i; i<num; i++)
    {
        v[i]=rand()%20+1;
        //cin>>v[i];//
    }
}

void verVector(int v[], int num)
{
    for (int i = 0; i<num; i++)
    {
        cout<<v[i]<<"\t";
    }
}

int ordenaInsercion(int v[], int num)
{
    int contar=0, aux, j;
    for(int i=1; i<num; i++)
   {
        aux=v[i];
        j=i-1;
        while(j>=0)
        {
            contar++;
            if(aux<v[j])
            {
                v[j+1]=v[j];
                v[j]=aux;
            }
            j--;
        }

   }
   return contar;
}

main()
{
    int num, comparaciones;
    cout<<"Ingresa Nro de elementos del vector: ";
    cin>>num;
    int vector[num];
    llenaVector(num, vector);
    cout<<"\nVector origial: \n";
    verVector(vector, num);
    comparaciones = ordenaInsercion(vector, num);
    cout<<"\nVector ordenado: \n";
    verVector(vector,num);
    cout<<"\nEl numero de comparaciones es: "<<comparaciones<<endl;


}