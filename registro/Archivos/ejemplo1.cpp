#include <iostream>
#include <fstream> //necesaria para manejar archivos
using namespace std;

main()
{
    // declara un objeto de tipo ofstream para escribir el archivo
    ofstream archivoSalida;
    // abrir el archivo, si no existe se creara
    archivoSalida.open("ejemplo.txt");
    // verificar si elk archivose abrio correctaente
    if (archivoSalida.is_open())
    {
        archivoSalida << "!Hola, mundo¡" << endl;
        archivoSalida << "Esto es una preuba" << endl;
        archivoSalida << "Linea 3" << endl;
        // cerrar el archivo
        archivoSalida.close();
        cout << "Texto escrito en el archivo con exito." << endl;
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    return 0;
}