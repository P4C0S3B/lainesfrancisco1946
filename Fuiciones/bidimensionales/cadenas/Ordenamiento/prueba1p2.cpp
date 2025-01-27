//https://github.com/P4C0S3B/lainesfrancisco1946//
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
       /*cout<<"Introduce el valor de la posicion["<<i<<"]: ";
       cin>>v[i];*/
    }
}

int ordenarburbujav1(int v1[], int n) //pasamos a int para contar el numero de cambios//
{
    int aux,contador=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            contador++;
            if(v1[j]>v1[j+1])
            {
                aux = v1[j];
                v1[j] = v1[j+1];
                v1[j+1] = aux;
            }
        }
    }
    return contador;
}

int ordenarburbujav2(int v2[], int n) //pasamos a int para contar el numero de cambios//
{
    int mejora=1;
    int aux,contador=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-mejora; j++)
        {
            contador++;
            if(v2[j]>v2[j+1])
            {
                aux = v2[j];
                v2[j] = v2[j+1];
                v2[j+1] = aux;
            }
        }
        mejora++;
    }
    return contador;
}

int ordenarburbujav3(int v3[], int n) //pasamos a int para contar el numero de cambios//
{
    int mejora=1;
    bool cambio=true;
    int aux,contador=0;
    for(int i=0; i<n-1 && cambio; i++)
    {
        cambio=false;
        for(int j=0; j<n-mejora; j++)
        {
            contador++;
            if(v3[j]>v3[j+1])
            {
                aux = v3[j];
                v3[j] = v3[j+1];
                v3[j+1] = aux;
                cambio=true;
            }
        }
        mejora++;
    }
    return contador;
}
void muestraVectorv1(int v1[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<v1[i]<<" ";
    }
}
void muestraVectorv2(int v2[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout<< v2[i]<<" ";
    }
}
void muestraVectorv3(int v3[], int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<v3[i]<<" ";
    }
}

void MejorMejora (int v[], int ne)
{
    int z = ordenarburbujav1(v,ne), y = ordenarburbujav2(v,ne), x = ordenarburbujav3(v,ne);
    
    if (z<y)
    {
        cout<<ordenarburbujav1<<endl;
        cout<<"La mejor version es v1."<<endl;
    } else if (y<x)
    {
        cout<<"La mejor version es v2."<<endl;
    } else if (x<z)
    {
        cout<<"La mejor version es v3."<<endl;
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
    muestraVectorv1(vec, ne);
    cout<<endl;
    cout<<"El numero de comparaciones burbuja v1 es: "<<ordenarburbujav1(vec,ne)<<endl;
    cout<<"El numero de comparaciones burbuja v2 es: "<<ordenarburbujav2(vec,ne)<<endl;
    cout<<"El numero de comparaciones burbuja v3 es: "<<ordenarburbujav3(vec,ne)<<endl;
    cout<<"\nVector ordenado v1: "<<endl;
    muestraVectorv1(vec, ne);
    cout<<"\nVector ordenado v2: "<<endl;
    muestraVectorv2(vec, ne);
    cout<<"\nVector ordenado v3: "<<endl;
    muestraVectorv3(vec, ne);
    cout<<endl;
    MejorMejora(vec,ne);
}