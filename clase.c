
#include "stdio.h"
#include "string.h"

struct persona
    {
        char nombre[10];
        int edad;
    };

void lectura(struct persona *p,int i);
void impresion(struct persona *p,int i);

int main(void)
{
    int i;
    struct persona p[2];

    for(i=0;i<2;i++)
    {
        lectura(&p[i],i);
    }

    for(i=0;i<2;i++)
    {
        impresion(&p[i],i);
    }
}

void lectura(struct persona *p,int i)
{
    printf("\nPersona[%i]\n",i);
    printf("Nombre:");
    fgets(p->nombre,sizeof(p->nombre),stdin);
    if(p->nombre[strlen(p->nombre)-1]=='\n')
        p->nombre[strlen(p->nombre)-1]=='\0';

    printf("Edad:");
    scanf("%i",&p->edad);
    getchar();
}

void impresion(struct persona *p,int i)
{
    printf("\n-------------------------------------\n");
    printf("\nPersona[%i]",i);
    printf("\nNombre:%s",p->nombre);
    printf("Edad:%i",p->edad);
}
