#include <iostream>
#include <fstream> //necesaria para manejar archivos
using namespace std;

main(){
    ofstream archivoSalida;
    archivoSalida.open("ejemplo.txt", ios::app);

    if(archivoSalida.is_open()){ //agrega al final del archivo sin sobreescribirlo
        archivoSalida << "Linea agregada al final." << endl;
        archivoSalida << "Otra linea mas" << endl;
        archivoSalida.close();
        cout << "Texto agregado con exito." << endl;
    } else {
        cout << "No se pudo abrir el archivo." << endl;
    }
    return 0;
}