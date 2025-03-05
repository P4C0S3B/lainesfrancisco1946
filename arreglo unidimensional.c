#include"stdio.h"
int main(void)
{
    char arreglo[4];
    int i;
    printf("ingrese 4 caracteres\n");
    for (i=0;i<4;i++)
{
    printf("caracter %i:",i);
    scanf("%c",&arreglo[i]);
    getchar();

}
 printf("caracteres ingresados\n");
 for(i=0;i<4;i++)
 {
   printf("%i:%c\n",i+1,arreglo[i]);
 }
}
