#include <iostream>
using namespace std;

double division(int a, int b){
        if (a == b){
            return 1;
        } else if (a>b) {
            return division (a-b, b)+1;
        } 
        if (a<b){
            return (double) a/b;
        }
    return 0.0;
}


main(){
    int numerador, denominador;
    cout << "Introduce el divisor: " << endl; 
    cin >> numerador;
    cout << "Introduce el denominador: " << endl;
    cin >> denominador;
    while (denominador == 0){
        cout << "No es posible dividir para 0. Por favor ingrese otro valor." << endl;
        cin >> denominador;
    } 
    cout << "La division de " << numerador << " entre " << denominador << " es: " << division(numerador, denominador) << endl;
}
