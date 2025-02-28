#include <iostream>
#include <fstream> //necesaria para manejar archivos
using namespace std;

main()
{
    // crear un archivo de tipo ifstream para leer el archivo
    ifstream archivoEntrada;
    // abrir el archivo
    archivoEntrada.open("ejemplo.txt"); //con ese nombre va a buscar y leer el archivo en la carpeta
    // verificar si el archivo se abrio correctamente
    if (archivoEntrada.is_open())
    {
        string linea;
        while (getline(archivoEntrada, linea))
        {
            cout << "Leido: " << linea << endl;
        }
        // cerrar el archivo
        archivoEntrada.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    return 0;
}