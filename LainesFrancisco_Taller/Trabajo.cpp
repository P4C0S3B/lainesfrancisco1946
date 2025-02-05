#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "arrays_trabajo.h"
using namespace std;
using namespace vector;




main ()
{
    int limInf, limSup, cantidadElem;
    cout<<"Ingrese el limite inferior de su serie: ";
    cin>>limInf;
    cout<<"Ingrese el limite superir de su serie: ";
    cin>>limSup;
    cantidadElem=limSup-limInf-1;
    cout<<"El numero de elementos es: "<<cantidadElem<<endl;
}
