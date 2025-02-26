#include"stdio.h"
#include"string.h"
#include"windows.h"

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
    char matricula[8];
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
void registrar(char *texto,struct conductor *d, struct cliente *c, int op);
void imprimir(struct conductor *d, struct cliente *c, int op);
void mostrarpedido();

int main(void)
{
    int op,op2,i=0;
    char continuar=' ',continuarm2=' ';
    struct conductor d[2];
    struct cliente c[2];
    do
    {
        system("Cls");
        op=menuPrincipal(op);
        if(op!=1&&op!=2)
        {
            printf("Opcion no valida!");
            Sleep(2000);
        }
        switch(op)
        {
            case 1:
                    do
                    {
                        op2=menuSecundario("Conductor");
                        if(op2>4||op2<0)
                        {
                            printf("Opcion no valida!");
                            Sleep(2000);
                        }
                        switch(op2)
                        {
                            case 1:
                                    do
                                    {
                                        registrar("Conductor",&d[i],&c[i],op);
                                        i++;
                                        printf("Desea registrar mas conductores? s/n");
                                        scanf("%c",&continuar);
                                         if(i==2)
                                        {
                                            printf("Limite de usuario!");
                                            Sleep(2000);
                                            i=0;
                                        }
                                    }while(continuar=='s'&&i<2);
                                    op2=5;
                                break;
                            case 2:
                                break;
                            case 3:
                                                                if (op==1)
                                {
                                    printf("\n\t---------------Conductores Registrados---------------\n");

                                    printf("\t|Nombre\t\t|Apellido\t|C.I\t\t|Edad\t\t|Vehiculo\t|Matricula\t|Color\t|\n");
                                    for(i=0;i<2;i++)
                                    {
                                        imprimir(&d[i],&c[i],op);
                                        printf("\n");
                                    }
                                }
                                break;
                            case 4:
                                break;
                            case 5:
                                op=5;
                                break;
                        }
                    }
                    while(op2>4||op2<1);
                break;
            case 2:
                    do
                    {
                        op2=menuSecundario("Cliente");
                        if(op2>4||op2<0)
                        {
                            printf("Opcion no valida!");
                            Sleep(2000);
                        }
            switch(op2)
                        {
                            case 1:
                                    do
                                    {
                                        registrar("Conductor",&d[i],&c[i],op);
                                        i++;
                                        printf("Desea registrar mas conductores? s/n");
                                        scanf("%c",&continuar);
                                         if(i==2)
                                        {
                                            printf("Limite de usuario!");
                                            Sleep(2000);
                                            i=0;
                                        }
                                    }while(continuar=='s'&&i<2);
                                    op2=5;
                                break;
                            case 2:
                                break;
                            case 3:
                                if (op==1)
                                {
                                    printf("\n\t---------------CLIENTE Registrados---------------\n");

                                    printf("\t|Nombre\t\t|Apellido\t|C.I\t\t|Edad\t\t|Vehiculo\t|Matricula\t|Color\t|\n");
                                    for(i=0;i<2;i++)
                                    {
                                        imprimir(&d[i],&c[i],op);
                                        printf("\n");
                                    }
                                }
                                op2=5;
                                break;
                            case 4:
                                break;
                            case 5:
                                op=5;
                                break;
                        }
                    }
                    while(op2>5||op2<1);
                break;
        }
    }
    while(op!=1&&op!=2);
}

int menuPrincipal()
{
    int op;
    printf("*Seleccione perfil de uber*\n");
    printf("1.Conductor\n");
    printf("2.Cliente\n");
    printf("seleccion opcion:");
    scanf("%i",&op);
    return op;
}

int menuSecundario(char *texto)
{
    int op;
    system("Cls");
    printf("Menu %s\n", texto);
    printf("1.Crear usuario\n");
    printf("2.Eliminar usuario\n");
    printf("3.Modificar usuario\n");
    printf("4.Mostrar usuarios\n");
    printf("5.Regresar al menu principal\n");
    printf("seleccion opcion:");
    scanf("%i",&op);
    return op;
}

void registrar(char *texto,struct conductor *d, struct cliente *c, int op)
{
    system("Cls");
    switch(op)
    {
        case 1:
            printf("Registro %s",texto);
            getchar();
            printf("\nIngrese nombre:");
            fgets(d->nombre,sizeof(d->nombre),stdin);
            if(d->nombre[strlen(d->nombre)-1]=='\n')
                d->nombre[strlen(d->nombre)-1]='\0';

            printf("Ingrese apellido:");
            fgets(d->apellido,sizeof(d->apellido),stdin);
            if(d->apellido[strlen(d->apellido)-1]=='\n')
                d->apellido[strlen(d->apellido)-1]='\0';

            printf("Ingrese ci:");
            fgets(d->ci,sizeof(d->ci),stdin);
            if(d->ci[strlen(d->ci)-1]=='\n')
                d->ci[strlen(d->ci)-1]='\0';

            printf("Ingrese edad:");
            scanf("%i",&d->edad);
            getchar();

            printf("Ingrese vehiculo:");
            fgets(d->vehiculo,sizeof(d->vehiculo),stdin);
            if(d->vehiculo[strlen(d->vehiculo)-1]=='\n')
                d->vehiculo[strlen(d->vehiculo)-1]='\0';

            printf("Ingrese matricula:");
            fgets(d->matricula,sizeof(d->matricula),stdin);
            if(d->matricula[strlen(d->matricula)-1]=='\n')
                d->matricula[strlen(d->matricula)-1]='\0';

            printf("Ingrese color:");
            fgets(d->color,sizeof(d->color),stdin);
                if(d->color[strlen(d->color)-1]=='\n')
                d->color[strlen(d->color)-1]='\0';
            break;
        case 2:

            printf("Ingrese nombre:");
            fgets(c->nombre,sizeof(c->nombre),stdin);
            if(c->nombre[strlen(c->nombre)-1]=='\n')
                c->nombre[strlen(c->nombre)-1]='\0';

            printf("Ingrese apellido:");
            fgets(c->apellido,sizeof(c->apellido),stdin);
            if(c->apellido[strlen(c->apellido)-1]=='\n')
                c->apellido[strlen(c->apellido)-1]='\0';

            printf("Ingrese ci:");
            fgets(c->ci,sizeof(c->ci),stdin);
            if(c->ci[strlen(c->ci)-1]=='\n')
                c->ci[strlen(c->ci)-1]='\0';

            printf("Ingrese edad:");
            scanf("%i",&c->edad);
            getchar();
            break;
    }

}

void imprimir(struct conductor *d, struct cliente *c, int op)
{
    switch(op)
    {
        case 1:
            printf("\t%s\t\t%s\t\t%s\t\t%i\t\t%s\t\t%s\t\t%s",d->nombre,d->apellido,d->ci,d->edad,d->vehiculo,d->matricula,d->color);
            break;
        case 2:
            printf("\t%s        \t\t%s       \t\t%s    \t\%i",c->nombre,c->apellido,c->ci,c->edad);
            break;
    }
}
