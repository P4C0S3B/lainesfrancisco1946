#include <iostream>
using namespace std;

void clasificacion(int num)
{
    while(num>=1 && num<=5)
    {
        cout<<"Deficiente."<<endl;
        break;
    }
    while(num>5 && num<=10)
    {
        cout<<"Regular."<<endl;
        break;
    }
    while(num>10 && num<=15)
    {
        cout<<"Bueno."<<endl;
        break;
    }
    while(num>15 && num<18)
    {
        cout<<"Muy bueno."<<endl;
        break;
    }
    while(num>18 && num<=20)
    {
        cout<<"Excelente"<<endl;
        break;
    }
}

main ()
{
    int numero;
    cout<<"Ingrese el numero a clasificar."<<endl;
    cin>>numero;
    clasificacion(numero);
}