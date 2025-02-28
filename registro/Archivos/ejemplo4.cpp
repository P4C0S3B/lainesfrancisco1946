#include <iostream>
#include <fstream>
using namespace std;

main()
{
    fstream archivo;
    string frase, nomArchivo;
    cout << "Ingrese el nombre del archivo con extension: ";
    cin >> nomArchivo;
    cout << "Escribe una frase para agregar al archivo: ";
    cin.ignore();
    getline(cin, frase);
    // abrir el archivo en modo lectura
    //archivo.open("ejemplo.txt", ios::out | ios::app);
    archivo.open(nomArchivo.c_str(), ios::out | ios::app);
    if (archivo.is_open())
    {
        archivo << frase << endl;
        archivo.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    archivo.open("ejemplo.txt", ios::in);
    if (archivo.is_open())
    {
        string linea;
        cout << "Contenido del archivo: " << endl;
        while (getline(archivo, linea))
        {
            cout << linea << endl;
        }
        archivo.close();
    }
    else{
        cout << "No se pudo abrir el archivo." << endl;
    }
    return 0;
}