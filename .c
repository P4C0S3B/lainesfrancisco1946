#include"stdio.h"
#include"string.h"
void reverseString(char frase[]);
int main (void)
{
    char frase[100], copia[100];
    char delimitador[]= " ";
    int cont=0;
    printf("Ingrese una frase> ");
    fgets(frase, sizeof(frase),stdin);

    int longitud=strlen(frase);
    printf("Longitud cadena> %i",longitud);

    printf("\nVocales> ");

    for (int i = 0; i < longitud; i++)
        {
           if (strchr("AEIOUaeiou",frase[i]))
            {
            printf("%c", frase[i]);
            cont++;
            }
        }

    printf("\nCantidad vocales> %i", cont);

    strcpy(copia, frase);

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

    printf("\nCadena original: %s\n", frase);

    strcpy(copia, frase);
    reverseString(copia);


    printf("\nCadena invertida: %s\n", copia);

}

void reverseString(char frase[100])
{
    int left = 0;
    int right = strlen(frase) - 1;

    while (left < right)
        {
        char temp = frase[left];
        frase[left] = frase[right];
        frase[right] = temp;
        left++;
        right--;
    }
}
