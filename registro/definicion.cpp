#include <iostream>
#include <string.h>
using namespace std;

/*registro: denotado con struct
tipo de datos de tipo simple en un solo obeto

struct nombre {
campos_;
};

struct persona{
char nombre[30];	
int edad
}
*/

struct persona{
    string nombre="Sin nombre"; //Estas variables son globales al estar fuera del main
    int edad=0;
    float estatura=0.0;

}persona1,persona2;

struct{
    string nombre;
    float nota;
} e1;

void registro(){
    persona p5,p6; //el chiste de crear un struct fuera del main es que se puedan declarar variables del mismo tipo dentro de cualquier funcion o main.
}

main(){
    /*typedef persona personas;//cambiar el nombre en un tipo de dato
    typedef int entero;
    int a,b;
    entero c,d;
    persona persona3, persona4;
    persona3.nombre = "Carlos Ortiz";
    persona3.edad=28;
    persona3.estatura=1.90;
    cout << "Nombre: "; getline(cin, persona4.nombre); //Para pedir un dato
    cout << "Edad: "; cin >> persona4.edad;
    cout << "Estatura: "; cin >> persona4.estatura;
    cout << "Datos ingresados" << endl;
    cout << "nombre= " << persona3.nombre<<"\t"; //asi se solicita el nombre de struct
    cout<<"edad= "<<persona3.edad<< "\t";
    cout<<"estatura= "<<persona3.estatura<<"\n";

    cout << "Nombre: " << persona4.nombre << "\t";
    cout << "Edad: " << persona4.edad << "\t";
    cout << "Estatura: " << persona4.estatura << "\n";*/

    cout << "Ingrese datos del estudiante N° 1: " << endl;
    cout << "Nombre: "; getline(cin, e1.nombre);
    cin. ignore();
    cout << "Nota: "; cin >> e1.nota;
}
