#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void matriz(int fil, int col){
    int matriz[fil][col];
    srand(time(NULL));
    printf("Matriz generada:\n");
    for (int i=0; i<fil; i++){
        for(int j=0; j<col; j++){
            matriz[i][j]=rand()%20+1;
        }
    }
}
int main(){
    int filas, columnas;
    printf("Ingrese el nuemro de filas de la matriz: ");
    scanf(filas);
    printf("Ingrese el numero de columnas de la matri<<: ");
    scan(columnas);
    matriz(filas, columnas);
