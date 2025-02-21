#include <iostream>
using namespace std;

struct persona{
    string nombre;
    int edad;
    float estatura;
};
void ingresarRegistro(persona &per1){ //con & ahora los datos se modifican en los originales
    cout << "Ingrese el nombre: "; 
    getline(cin, per1.nombre);
    cout << "Ingrese la edad: ";
    cin >> per1.edad;
    cout << "Ingrese la estatura: ";
    cin >> per1.estatura;
}

void mostrarRegistro(persona per1){
    cout << "El nombre es: " << per1.nombre << endl; //no se muestran datos, para que mostrar datos muestre los cambos, debemos llamarlo por referencia
    cout << "La edad es: " << per1.edad << endl;
    cout << "La estatura es: " << per1.estatura << endl;
}

main(){
    persona p1={"",0,0.0};
    ingresarRegistro(p1);
    mostrarRegistro(p1);
}