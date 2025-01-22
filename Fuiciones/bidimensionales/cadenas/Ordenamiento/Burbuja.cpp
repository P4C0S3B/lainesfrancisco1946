#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void llenarVector(int v[], int n)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        v[i]=rand()%20+1;
    }
}

void ordenarburbuja(int v[], int n)
{
    int aux;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(v[j]>v[j+1])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void muestraVector(int v[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}

main()
{
    int ne;
    cout<<"Numero de elementos: ";
    cin>>ne;
    int vec[ne];
    llenarVector(vec,ne);
    cout<<"Vector original: ";
    muestraVector(vec, ne);
    cout<<endl;
    ordenarburbuja(vec,ne);
    cout<<"Vector ordenado: ";
    muestraVector(vec, ne);
}