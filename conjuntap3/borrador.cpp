#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

// Definimos la estructura para cada conductor
struct Conductor {
    string nombre;
    int kmRecorridos;
};

int main() {
    vector<Conductor> conductores;
    string nombre;
    int km;
    char respuesta;

    do {
        cout << "Ingrese el nombre del conductor: ";
        cin >> nombre;
        cout << "Ingrese los kilometros recorridos por " << nombre << ": ";
        cin >> km;

        Conductor conductor = {nombre, km};
        conductores.push_back(conductor);

        cout << "¿Desea ingresar otro conductor? (s/n): ";
        cin >> respuesta;

    } while (respuesta == 's' || respuesta == 'S');

    string conductorMasKm;
    int maxKm = 0;
    int sumaTotalKm = 0;

    for (const auto& conductor : conductores) {
        sumaTotalKm += conductor.kmRecorridos;
        if (conductor.kmRecorridos > maxKm) {
            maxKm = conductor.kmRecorridos;
            conductorMasKm = conductor.nombre;
        }
    }
    cout << "\nResumen de los conductores y kilómetros recorridos:\n";
    for (const auto& conductor : conductores) {
        cout << "Conductor: " << conductor.nombre << ", Kilómetros recorridos: " << conductor.kmRecorridos << endl;
    }
    cout << "\nSuma total de kilómetros recorridos: " << sumaTotalKm << endl;
    cout << "Conductor con más kilómetros: " << conductorMasKm << " con " << maxKm << " km" << endl;

    ofstream archivo("registro_conductores.txt");
    archivo << "Resumen de los conductores y kilómetros recorridos:\n";
    for (const auto& conductor : conductores) {
        archivo << "Conductor: " << conductor.nombre << ", Kilómetros recorridos: " << conductor.kmRecorridos << endl;
    }
    archivo << "\nSuma total de kilómetros recorridos: " << sumaTotalKm << endl;
    archivo << "Conductor con más kilómetros: " << conductorMasKm << " con " << maxKm << " km" << endl;
    archivo.close();

    cout << "\nLa información se ha guardado en 'registro_conductores.txt'." << endl;

    return 0;
}