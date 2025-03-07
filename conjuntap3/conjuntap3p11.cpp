#include <iostream>
#include <string>
#include <vector>
using namespace std;

void ingresarCadena(vector <string> &cadena, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "Ingrese el elemento " << i << ": ";
        getline(cin, cadena[i]);
    }
}

void mostrarCadena(vector<string> &cadena)
{
    for (string elemnto : cadena)
    {
        cout << elemnto << endl;
    }
}
void ordenarCadena(vector<string> &cadena)
{
    for (string elemnto : cadena)
    {
        
    }
}

main()
{
    int num;
    cout << "ingrese el numero de caracteres: ";
    cin >> num;
    cin.ignore();
    vector<string> cadena(num);
    ingresarCadena(cadena, num);
    mostrarCadena(cadena);
}