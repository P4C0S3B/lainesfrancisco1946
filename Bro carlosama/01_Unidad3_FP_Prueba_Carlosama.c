#include"stdio.h"
#include"string.h"
void reverseString(char texto[]);
int main (void)
{
    char texto[50], copia[50];
    char delimitador[]=" ";
    int contadorp=0;
    int cont=0;
    printf("Introduce el texto de la frase:");
    fgets(texto, sizeof(texto),stdin);

    char *palabra=strtok(texto," ");
    while (palabra!=NULL)
        {
        contadorp++;
        palabra=strtok(NULL," ");
        }
    printf("\nLa cantidad de palabras en la frase introducida es: %i",contadorp);


    int longitud=strlen(texto);
    for (int i=0;i<longitud;i++)
        {
           if(strchr("AEIOUaeiou",texto[i]))
            {
            printf("%c",texto[i]);
            cont++;
            }
        }

    printf("\nCantidad vocales> %i",cont);


 strcpy(copia,texto);

    char *token=strtok(copia, delimitador);
    char *palabramaslarga=token;
    while (token!=NULL)
    {
        if(strlen(token)>strlen(palabramaslarga))
        {
            palabramaslarga=token;
        }
        token=strtok(NULL, delimitador);
        }

        printf("%s\n",token);

    printf("\nCadena original: %s\n",texto);

    strcpy(copia, texto);
    reverseString(copia);


    printf("\nCadena invertida: %s\n", copia);
}




    void reverseString(char texto[50])
{
    int left=0;
    int right=strlen(texto)-1;

    while (left<right)
        {
        char temp=texto[left];
        texto[left]=texto[right];
        texto[right]=temp;
        left++;
        right--;
        }
}







