#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

struct inventario{
    int id;
    string producto;
    int cant;
    double precio;
    string sucursal;
};

void leerArchivo(ifstream &archivo)
{
    string linea;
    while (getline(archivo, linea))
    {
        cout << linea << endl;
    }
    archivo.close();
}

int recuentoArticulos(ifstream &archivo)
{
    vector<string> productos;
    string linea;
    while(getline(archivo, linea)){
        productos.push_back(linea);
    }
    return productos.size();
}

main()
{
    int recart;
    string nombreArchivo;
    ifstream archivoEntrada;
    ofstream archivoSalida;
    cout << "Ingrese el nombre del archivo y su extension: ";
    cin >> nombreArchivo;
    archivoEntrada.open(nombreArchivo.c_str(), ios::in);
    if (archivoEntrada.is_open())
    {
        leerArchivo(archivoEntrada);
        recart = recuentoArticulos(archivoEntrada);
        archivoEntrada.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    archivoSalida.open("consolidado.txt", ios::out);
    if (archivoSalida.is_open())
    {
        archivoSalida << "Cantidad total de cada articulo: " << recart << endl;
        archivoSalida << "Cantidad total en la sucursal Sur: " << endl;
        archivoSalida << "La cantidad del articulo teclado en la sucursal Norte: " << endl;
        archivoSalida << "La recaudación total de cada sucursal: " << endl;
        archivoSalida << "La recaudación total de la empresa: " << endl;
        archivoSalida << "La sucursal de mayor recaudación: " << endl;
        archivoSalida.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
}