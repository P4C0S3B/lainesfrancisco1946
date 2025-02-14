#include <iostream>
#include <string.h>
using namespace std;

int hallarDato(string original, string valor)
{
    int encontrado;
    encontrado = original.find(valor);
    return encontrado;
}

void reemplazoString(string original, string valor, string reemp)
{
    int tamaño, pos;
    tamaño = original.size();
    pos  = hallarDato(original, valor);
    if(pos != string::npos){
        original.replace(pos, valor.size(), reemp);
    }
    cout << original << endl;
}

main(){
    string origin, valor, reemp;
    cout<<"Ingrese la cadena original: "; 
    getline(cin, origin);
    cout << "Ingrese el texto que desea reemplazar: ";
    getline(cin, valor);
    cout << "Ingrese el texto que va a reemplazar: ";
    getline(cin, reemp);
    reemplazoString(origin, valor, reemp);
}