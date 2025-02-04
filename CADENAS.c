#include"stdio.h"
int main(void)
{
    //Declaracion de cadena
    //char palabra[5];

    // Metodo de inicializacion por llaves
    //char palabra2[5]={'H','O','L','A','/0'};
    //printf("%c%c%c%c%c",palabra2[0],palabra2[1],palabra2[2],palabra2[3],palabra2[4]);


    //METODO DE POSICION
    /*palabra[0]='H';
    palabra[1]='O';
    palabra[2]='L';
    palabra[3]='A';
    palabra[4]='/0';*/
    //printf("%c%c%c%c%c",palabra[0],palabra[1],palabra[2],palabra[3],palabra[4]);

    //METODO DE USO DE COMILLAS DOBLES
    /*char palabra[5]="Hola";
    print("%s",palabra);*/



    //CUANDO NO IMPORTA EL TAMAÑO DEL TEXTO
    /*char palabra[]="Hola como estas?";
    int i=0;
    for(i=0;i<sizeof(palabra);i++)
    {
        printf("%c\n",palabra[i]);
    }*/



    char palabra[30];
    int i;
    //LECTURA DESDE TECLADO
    printf("Ingrese una cadena de texto letra por letra>");

    for(i=0;i<sizeof(palabra);i++)
    {
        printf("Ingrese cadena");
        fgets(palabra,30,stdin);

    }
    printf("\nCadena ingresada:");
    for(i=0;i<sizeof(palabra);i++);
    {
        printf("%c\n",palabra[i]);
    }


}
