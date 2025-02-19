#include"stdio.h"
#include"string.h"
int main (void)
{
    //declaeracion de estructura

      struct estructura_universidad
    {

      char nombre[100];
      char sede[30];
      int semestre;
      char carrera[50];

    };

    struct estructura_persona
    {

      char nombre[25];
      char apellido[30];
      int edad;
      char fecha_nacimiento[15];
      struct estructura_universidad u;

    };

    struct estructura_departamento
    {

      char dep[25];
      char acargo[30];
      int piso;
      char [15];
      struct estructura_universidad u;

    };


    //declarar varaiables de tipo estructura pa poder usarla
    struct estructura_persona ep1;
    //LECTURA DESDE TECLADO PERSONA
     printf("Ingrese el nombre del Estudiante>");
    fgets(ep1.nombre,25,stdin);
    if(ep1.nombre[strlen(ep1.nombre)]=='\n')
        ep1.nombre[strlen(ep1.nombre)-1]=='\0';

    printf("Ingrese el apellido del Estudiante>");
    fgets(ep1.apellido,30,stdin);
    if(ep1.apellido[strlen(ep1.apellido)]=='\n')
        ep1.apellido[strlen(ep1.apellido)-1]=='\0';

    printf("Ingrese la Edad>");
    scanf("%i",&ep1.edad);
    getchar();

    printf("Ingrese el la fecha de nacimentiento");
    fgets(ep1.fecha_nacimiento,15,stdin);
    if(ep1.fecha_nacimiento[strlen(ep1.fecha_nacimiento)]=='\n')
        ep1.fecha_nacimiento[strlen(ep1.fecha_nacimiento)-1]=='\0';


    //LECTURA DESDE TECLADO UNIVERSIDAD
    printf("Ingrese el nombre de la Universidad>");
    fgets(ep1.u.nombre,25,stdin);
    if(ep1.u.nombre[strlen(ep1.u.nombre)]=='\n')
        ep1.u.nombre[strlen(ep1.u.nombre)-1]=='\0';

    printf("Ingrese la sede>");
    fgets(ep1.u.sede,30,stdin);
    if(ep1.u.sede[strlen(ep1.u.sede)]=='\n')
        ep1.u.sede[strlen(ep1.u.sede)-1]=='\0';

    printf("Ingrese el Semestre>");
    scanf("%i",&ep1.u.semestre);
    getchar();

    printf("Ingrese el la Carrera");
    fgets(ep1.u.carrera,15,stdin);
    if(ep1.u.carrera[strlen(ep1.u.carrera)]=='\n')
        ep1.u.carrera[strlen(ep1.u.carrera)-1]=='\0';

    //LECTURA DESDE TECLADO DEPATAMENO
    printf("Ingrese el nombre del departamento>");
    fgets(ep1.u.nombre,25,stdin);
    if(ep1.u.nombre[strlen(ep1.u.nombre)]=='\n')
        ep1.u.nombre[strlen(ep1.u.nombre)-1]=='\0';

    printf("Ingrese la sede>");
    fgets(ep1.u.sede,30,stdin);
    if(ep1.u.sede[strlen(ep1.u.sede)]=='\n')
        ep1.u.sede[strlen(ep1.u.sede)-1]=='\0';

    printf("Ingrese el Semestre>");
    scanf("%i",&ep1.u.semestre);
    getchar();

    printf("Ingrese el la Carrera");
    fgets(ep1.u.carrera,15,stdin);
    if(ep1.u.carrera[strlen(ep1.u.carrera)]=='\n')
        ep1.u.carrera[strlen(ep1.u.carrera)-1]=='\0';


    printf("El Nombre es %s",ep1.nombre);
    printf("\nEl Apelldio es %s",ep1.apellido);
    printf("\nEl Tiene %i años de edad",ep1.edad);
    printf("\nFecha de Naciemiento> %s",ep1.fecha_nacimiento);

    printf("El Nombre  de la universidad es %s",ep1.u.nombre);
    printf("\nLa sede  es %s",ep1.u.sede);
    printf("\nEsta en el semestre %i",ep1.u.semestre);
    printf("\nSu carrera es > %s",ep1.u.carrera);
}
