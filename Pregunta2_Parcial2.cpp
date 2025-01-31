#include <iostream>
#include <string>
using namespace std;

int Revision (string cadena)
{
    for (char c : cadena)    
        if (c >= '0' && c <='9')
        {
            return 1;
        } else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
        {
            return 2;
        } else if ((c < '0' || c > '9') && (c < 'A' || c > 'Z')&&(c < 'a' || c > 'z'))
        {
            return 3;
        }
    return 0;
}

void tipo(string cadena)
{
    int resultado = Revision(cadena);
    if(resultado==1)
    {
        cout<<"La cadena es Numerica."<<endl;
    } else if (resultado==2)
    {
        cout<<"La cadena es Alfabetica."<<endl;
    } else if (resultado==3)
    {
        cout<<"La cadena es Alfanumerica."<<endl;
    } else if (resultado==0)
    {
        cout<<"La cadena contiene caracteres especiales o espacios.";
    }
}

main() {
    string cadena;
    cout << "Introduce una cadena: ";
    getline(cin, cadena);
    tipo(cadena);
}


