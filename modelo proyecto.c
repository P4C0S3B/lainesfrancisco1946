#include"stdio.h"
#include"windows.h"
#include"string.h"
struct pedido
{
    char origen[30];
    char destino[30];
    float precio;
};

struct conductor
{
    char nombre[20];
    char apellido[20];
    char ci[10];
    int edad;
    char vehiculo[20];
    char matricula[7];
    char color[20];
    struct pedido p;
};
struct cliente
{
    char nombre[20];
    char apellido[20];
    char ci[10];
    int edad;
    struct pedido p;
};
int menuPrincipal();
int menuSecundario(char *texto);
void registrar(char *texto,struct conductor d,struct cliente c);
void imprimir(char *texto);
void mostrarpedido();

int main(void)
{

    int op,op2,i=0;
    struct conductor d[2];
    struct cliente c[2];


    do
    {
    system("cls");
op=menuPrincipal(op);
if(op!=1&&op!=2)
{
    printf("Option no valida!");
    Sleep(2000);
}
}

while(op!=1&&op!=2);
switch(op)
{
    case 1:
            do
            {
                op2=menuSecundario("Conductor");
                if(op2>4||op2<0)
                {
                    printf("Opcion no valida!");
                    sleep(2000);
                op=5;
            }
            while(op>4||op2<1);
        break;
    case 2:
            do
            {
                op2=menuSecundario("Cliente");
                if(op2>4||op2<0)
                {
                    printf("Opcion no valida!");
                    sleep(2000);
                }
                op=5;
            }
            while(op>4||op2<1);
        break;
    }
}
    while(op!=1&&op!=2);
}
int menuPrincipal()
{
    int op;
    printf("**Seleccione perfil de uber**\n");
    printf("1.Conductor\n");
    printf("2.Cliente\n");
    printf("seleccion opcion:");
    scanf("%i",&op);
    return op;
}
int menuSecundario()
{
    int op;
    system("Cls");
    printf("Menu %s\n",texto);
    printf("1.Crear usuario\n");
    printf("2.Eliminar usuario\n");
    printf("3.Modificar usuario\n");
    printf("seleccion opcion:");
    scanf("%i",&op);
    return op;
}
void registrar(char *texto,struct conductor d,struct cliente c)
{
    printf("Registro %s",texto);
    printf("Ingrese nombre:");
    fgets(d->nombre,sizeof(d->nombre),stdin);

    printf("Ingrese apellido:");
    fgets(d->apellido,sizeof(d->apellido),stdin);

    printf("Ingrese ci:");
    fgets(d->ci,sizeof(d->ci),stdin);

    printf("Ingrese edad:");
    scanf("%i",&d.edad);

    printf("Ingrese vehiculo:");
    fgets(d.vehiculo,sizeof(d.vehiculo),stdin);

    printf("Ingrese matricula:");
    fgets(d->matricula,sizeof(d->matricula),stdin);

    printf("Ingrese color:");
    fgets(d->color,sizeof(d->color),stdin);
}
