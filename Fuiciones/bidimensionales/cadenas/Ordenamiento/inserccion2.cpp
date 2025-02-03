#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void llenaVector(int v[], int n){
    srand(time(NULL));
    for(int i = 0; i<n; i++){
        //v[i]=rand()%20+1;
        cin>>v[i];
    }
}

void muestraVector(int v[],int n){
    for(int i = 0; i<n;i++){
        cout<<v[i]<<"\t";
    }
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

main(){

    int ne, comparaciones;
    cout<<"Ingrese nro de elementos del vector: ";
    cin>>ne;
    int vector[ne];
    llenaVector(vector, ne);
    cout << "Vector Original: \n";
    muestraVector(vector, ne);
    comparaciones = ordenInserccion(vector, ne);
    cout << "\nVector ordenado: \n";
    muestraVector(vector, ne);
    cout << "\nEl nro de comparaciones = "<<comparaciones;


}