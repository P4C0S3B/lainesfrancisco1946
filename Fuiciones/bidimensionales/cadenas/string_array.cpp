#include <iostream>
using namespace std;

void cambiarString(string &nombres)//asi sin el &, se envia por valor, ninguna modificacion de nombres(variable principal) se refela en main"
{
    nombres = "Sin Nombres";
}

void cambiarArray(char apellido[])
{
   /*apellido[0] = 'A';
    apellido[1] = 'l';
    apellido[2] = 'v';
    apellido[3] = 'a';
    apellido[4] = 'r';
    apellido[5] = 'e';
    apellido[6] = 'z';
    apellido[7] = '\0';//caracter nulo que indica el final de una cadena//*/
    cout << "Ingresa el nuevo apellido: ";
    cin.getline(apellido, 20);  
}
main()
{
    string nombres, apodos;//puedo tartar string como variable, puedo por ejemplo decir que nombres = apodos//
    string curso[5] = {"Java", "C++", "PHP", "Python", "C#"};//Esta es una lista de strings, puedo acceder a ellas con un array//
    char apellido[20], apodo1[20];//con un array no, apellidos = apodos, no se puede asignar un string a un array, tampoco puedo hacerlo entre arrays//
    cout << "Ingrese sus nmombres: ";
    getline(cin, nombres); //Para ingresar una cadena de caracteres con string//
    cout << "Su nombre es: " << nombres << endl;
    cambiarString(nombres);
    cout<<"Su nombre tras la funcion es: "<<nombres<<endl;
    cout << "Ingrese sus apellidos: ";
    cin.getline(apellido, 20);//Para arrays cin.getlin("nombre del array","numero de caracteres del array")//

    cout << "Su apellido es: " << apellido << endl;
    cambiarArray(apellido);
    cout << "Su apellido tras la funcion es: " << apellido << endl;

    getline(cin, apodos);
    cout << "Su apodo es: " << apodos << endl;

}