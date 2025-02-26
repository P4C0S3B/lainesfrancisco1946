#include "stdio.h"

int main()
{
    FILE *archivo;

    // Abre el archivo en modo binario para escritura
    archivo = fopen("datos.txt", "wb");
    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo para escribir.\n");
        return 1;
    }

    // Datos que se escribirán en el archivo
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num_elementos = sizeof(numeros) / sizeof(numeros[0]);

    // Escribe los datos en el archivo
    fwrite(numeros, sizeof(int), num_elementos, archivo);

    // Cierra el archivo después de escribir
    fclose(archivo);

    // Abre el archivo en modo binario para lectura
    archivo = fopen("datos.txt", "rb");
    if (archivo == NULL)
    {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    // Declara un arreglo para almacenar los números leídos
    int numeros_leidos[num_elementos];

    // Lee los datos del archivo binario
    fread(numeros_leidos, sizeof(int), num_elementos, archivo);

    // Cierra el archivo después de leer
    fclose(archivo);

    // Muestra los números leídos
    printf("Numeros leidos del archivo binario:\n");
    for (int i = 0; i < num_elementos; i++)
    {
        printf("%d ", numeros_leidos[i]);
    }
    printf("\n");

    return 0;
}
