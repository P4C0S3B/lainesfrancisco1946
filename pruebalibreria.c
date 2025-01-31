#include <stdio.h>
#include "factorial.h.c"

int main(){
    int num, resultado;

    //Solicitar al usuario que ingrese un numero
    printf("Ingrese un numero para calcular el factorial: ");
    scanf("%d", &num);

    //llamada a la funcion factorial desde la libreria
    resultado = calcularFactorial(num);

    //Mostrar el resultado
    printf("EL reultado factorial de &d es: %d\n", num, resultado);
    return 0;

}
