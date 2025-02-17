#include <iostream>
#include <string2.h>
using namespace std;

main ()
{
    string palabras;
    cout << "Ingrese una palabra: " << endl;
    getline(cin, palabras);
    reemplazar(palabras);
    cout << "La cadena final: " << palabras << endl;
    return 0;

}