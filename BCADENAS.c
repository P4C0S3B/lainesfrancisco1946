#include"stdio.h"
#include"string.h"
int main()
{
    char password[2];
    do
    {
        printf("Ingrese un caracter de contraseña usando un caracter especial: ");
        fgets(password,sizeof(password),stdin);
        if (strchr(password, '@') != NULL || strchr(password, '!') != NULL)
         {
            printf("Contraseña aceptada.\n");
            break;
        }else{
            printf("Caracter incorrecto. Inténtelo nuevamente.\n");
        }
    } while (1);
}
