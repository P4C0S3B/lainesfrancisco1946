#include <iostream>
#include <vector>
using namespace std;

main(){
    vector <int> numeros(10);
    for(int i=0; i<10; i++){
        numeros[i]=i+1;
    }
    cout<<"Elementos del vector: "<<endl;
    for(auto x:numeros){
        cout << x << " ";
    }
    cout << "Tamaño del vector: " << numeros.size() << endl;
    numeros.erase(numeros.begin()+3, numeros.begin()+6);//numeros.begin() vendria siendo una constante, desde la que tomamos referencia para iniciar y terminar
    for(auto x:numeros){
        cout << x << " ";
    }
    cout << endl;
    cout << "El tamaño del vector ahora es: " << numeros.size() << endl;
}