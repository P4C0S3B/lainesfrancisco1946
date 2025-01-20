#include <iostream>
using namespace std;

int exponente (int n, int m){
    if(m == 0)
    return 1;
    else
    return n * exponente(n, m-1);
}

main(){
    int base, potencia;
    cout << "Introduce la base: " << endl;
    cin >> base;
    cout << "Introduce el exponente; " << endl;
    cin >> potencia;
    cout << base << " elevado a la " << potencia << " potencia es: " << exponente(base, potencia) << endl;
}