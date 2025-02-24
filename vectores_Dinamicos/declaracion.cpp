#include <iostream>
#include <vector> //para utilizar vectores
using namespace std;

void cambiar_elemento(vector <int> &num){
    num[0]=100;

}

main()
{
    vector <int> datos, datos1; //declaracion del vector == vector (para crear uno) <tipo de dato> nombre del vector;
    int numero[10], valores[10]; //si quisiesemos copiar los valores de uno a otro tendriamos que hacerlo con for.
    vector <float> notas(3, 9.5);//inicializado asi, (a, b): a indica cuantos valores se van a inicializar con b, en este caso tedriamos 3 veces 4.5
    datos.push_back(10); //con nombrevector.push_back(dato); se agrega un dato al vector, esta seria la posicion 0
    datos.push_back(20); //esta seria la poscion 1...
    datos.push_back(30);
    datos.push_back(40);
    datos.push_back(50);
    for (int i=0; i<datos.size();i++)
    {
        cout<<datos[i]<< endl;
    }
    cout << endl;
    for(auto x:datos){ // auto x para recorrer el vector automaticamente
        cout<<x<<" ";
    }
    cout << endl;
    for(auto y:notas){
        cout << y << " ";
    }
    //datos1=datos;  copiamos el vector datos en datos1
    //cout << dato[2]; para acceder a un dato en especifico del vector y, en este caso, mostrarlo
    //.erase() para eliminar una cantidad de vectores segun su posicion
    //.size() para saber cuantos elementos hay en el vector
    cout << "\ndatos1\n";
    for(auto x:datos1){
        cout << x << " ";
    }
    datos.erase(datos.begin()+2, datos.begin()+4); //elimina los elementos de 2 a 4, es decir, desde el 2 hasta el 4
    cout << "Nuevos elementos de datos: "<<endl;
    for(auto x:datos){
        cout << x << " ";
    }
    cout << endl;
    //para eliminar solo una posicion
    datos.erase(datos.begin()+1,datos.begin()+2);
    cout << "Nuevos elementos de datos: "<<endl;
    for(auto x:datos){
        cout << x << " ";
    }
    //insertar elementos en una posicion == vector.insert(vector.begin()+posicion, dato)
    cout << endl;
    cout<<"INsertando elemento enre elementos."<<endl;
    datos.insert(datos.begin()+1, 80);
    for(auto x:datos){  
        cout << x << " ";
    }
    cambiar_elemento(datos);
    cout << "\nNuevos elementos de datos tras llamar a la funcion: "<<endl;
    for(auto x:datos){
        cout << x << " ";
    }
    datos.pop_back(); //elimina el ultimo elemento
    cout << "\nNuevos elementos de datos tras llamar a la funcion: "<<endl;
    for(auto x:datos){
        cout << x << " ";
    }
    cout<<boolalpha<<endl;;
    cout << datos.empty(); //para saber si el vector esta vacio
}