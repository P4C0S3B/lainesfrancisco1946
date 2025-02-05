#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
namespace vector{
    int llenarVector(int vec[], int ne, int ri=0, int rf=10){
        int i;
        for(i=0; i<ne;i++){
            vec[i]=rand()%(rf-ri+1)+ri;         //vec[i]= ri + rand()%(rf+1-ri);        
            //variable = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);//
            return vec[i];
            }
        return 0;
    }

    void seleccionMaquina(int vec[], int ne, int ri=0, int rf=10)
    {
        int i;
        for(i=0;i<ne;i++)
        {
            vec[i]=rand()%(llenarVector(vec, ne, ri, rf));
        }
    }
    void verDatos(int vec[], int ne){
        for(int i =0; i<ne;i++)
        {
            cout<<vec[i]<<"\t";
        }
        cout<<endl;
    }
    void ordenInserccion(int v[], int ne){
        int  aux;
        for(int i=1;i<ne;i++){
            aux = v[i];
            int j  = i - 1;
            while (j >= 0){
                if(aux < v[j]){
                    v[j+1]=v[j];
                    v[j] = aux;
                }
                j--;
            }
        }
    }
}
