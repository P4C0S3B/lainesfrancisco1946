#include <iostream>
using namespace std;

main()
{
    string cadena="Informatica";
    //borramos caracteres de la cadena
    cadena.clear();
    cout<<cadena<<endl;//No muestra nada
    //Volvemos a inicializar la cadena con un valor
    cadena="Informatica";

    //longitud de la cadena
    cout << "La cadena " << cadena << " tiene " << cadena.length() << " caracteres." << endl;

    //Priemer y ultimo caracter de la cadena
    cout << "Primer caracter: " << cadena.front() << endl; //Igual que cadena[0]
    cout << "Ultimo caracter: " << cadena.back() << endl; //Igual que cadena[cadena.length()-1]

    //Añadir cadenas
    cadena.append(" moderna"); // es lo mismmo que cadena += "moderna"
    cout << cadena << endl;

    //Añadimos un caracter
    char car='0';
    cadena.append(1,car); //(numero de caracteres, el caracter que se añade)
    cout << cadena << endl;

    //Volvemos a inicializar con un valor 
    cadena="Informatica";

    //Buscar caracteres
    if(cadena.find("i")!=-1)
    {
        cout << "Posicion del primer caracter i: " << cadena.find("i") << endl;
    }
    cout << "Posicion del segundo caracter i: " << cadena.find("i", 1) << endl;

    //Extraer subcadenas
    string subcad;
    subcad=cadena.substr(2, 3);
    cout << subcad << endl;
    subcad=cadena.substr(5);
    cout << subcad << endl;

    //Reemplazar parte de la cadena, con el valor 0 en la segunda posicion, realiza el cambio y desplaza las letras hacia la derecha

    cadena.replace(6, 5, "accion");
    cout << cadena << endl;
    return 0;
}