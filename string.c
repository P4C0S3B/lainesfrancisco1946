#include"stdio.h"
#include"string.h"
#include"windows.h"
int main(void)
{
    //FUNCION strlen
    /*
    char cadena[]="Hola, mundo!";
    int longitud=strlen(cadena);

    printf("Cadena: %s\n", cadena);
    printf("Longitud de la cadena: %i\n", longitud);
    return 0;
    */

    //FUNCION strcat
    /*
    char saludo[50]="¡Hola,";
    char nombre[]="Juan!";

    strcat(saludo,nombre);
    printf("%s\n", saludo);
    */

    //FUNCION strcmp
    char cadena1[]="bananos";
    char cadena2[]="bananol";
    int resultado=strcmp(cadena1,cadena2);
    if(resultado==0)
    {
        printf("las cadenas son iguales,\n");
    }else if(resultado<0)
    {
        printf("cadena1 es menor que cadena 2.\n");
    }
    if(resultado>0)
    {
        printf("cadena1 es mayor que cadena2.\n");
    }
}
