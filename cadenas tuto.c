#include"stdio.h"
#include"string.h"
int main (void)
{
char cadena[30],cadena1[30];
 printf("Ingrese la primera cadena\n");
 fgets(cadena,sizeof(cadena),stdin);
 printf("Ingrese la segunda  cadena\n");
 fgets(cadena,sizeof(cadena1),stdin);
 cadena[strcspn(cadena,"\n"]='\0';
    cadena1[strcspn(cadena1,"\n"]='\0';
 printf("la longitud de la cadena es %s\n",strlen(cadena));

 int numero2= atoi(cadena1);
 printf("Numero 2:%i\n",numero2);

 double decimal1=atof(cadena);
  printf("Decimal 1:%.2f\n",decimal1);
}
