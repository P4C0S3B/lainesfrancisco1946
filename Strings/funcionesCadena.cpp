#include <iostream>
#include <string.h>
using namespace std;

int comparaCadena(char cad1[], char cad2[])
{
    return strcmp(cad1, cad2); // funcion de string.h para comparar cadenas
}
void copiaCadena(char cad1[], char cad2[])
{
    strcpy(cad1, cad2); // funcion de string.h para copiar cadenas, destructivo, porque se pierde uno de los valors//
}
void anadeCadena(char cad1[], char cad2[])
{
    strcat(cad1, cad2); // funcion de string.h para anadir cadenas
}
bool alfabeticoNumerico(char cad1[])
{
    bool alfaNumerico = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isalnum(cad1[i]) == 0)
        {
            alfaNumerico = false;
            break;
        }
    }
    return alfaNumerico;
}
bool alfabetico(char cad1[])
{
    bool alfa = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isalpha(cad1[i]) == false && isblank(cad1[i]) == true) //evaluador de si es valor alfabetico o no, arroja valor v o f//
        {
            alfa = false;
            break;
        }
    }
    return alfa;
}

bool numerico(char cad[])
{
    bool numerico = true;
    for (int i = 0; i < strlen(cad); i++)
    {
        if (isdigit(cad[i]) == 0) //evaluador de si es valor numerico o no, arroja valor v o f//
        {
            numerico = false;
            break;
        }
    }
    return numerico;
}
bool espacios(char cad1[])
{
    bool espacios = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if (isspace(cad1[i]) == 0) //evaluador de si existen espacios o no, arroja valor v o f//
        {
            espacios = false;
            break;
        }
    }
    return espacios;
}
bool esMiuscula(char cad1[])
{
    bool minuscula = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if(islower(cad1[i]) == false)//evalua si la cadena es minuscula//
        {
            minuscula = false;
            break;
        }
    }
    return minuscula;
}
bool esMayuscula(char cad1[])
{
    bool mayuscula = true;
    for (int i = 0; i < strlen(cad1); i++)
    {
        if(isupper(cad1[i]) == false)//evalua si ela cadena es mayuscula //
        {
            mayuscula = false;
            break;
        }
    }
    return mayuscula;
}
void aMayusculas(char cad1[])
{
    for(int i = 0; i< strlen(cad1); i++)
    {
        cad1[i] = toupper(cad1[i]);
    }
}
void aMinusculas(char cad1[])
{
    for (int i = 0; i <strlen(cad1); i++)
    {
        cad1[i] = tolower(cad1[i]);
    }
}
main()
{
    char cad1[50], cad2[50], cad3[50];
    int comparacion;
    cout << "Ingrese la primera cadena: ";
    cin.getline(cad1, 50);
    cout << "Ingrese la segunda cadena: ";
    cin.getline(cad2, 50);
    comparacion = comparaCadena(cad1, cad2);
    cout << "Comparacion: " << comparaCadena(cad1, cad2) << endl; // si cadena1 es menor que cadena2 devuelve un -1, si es alreves devuelve un 1, si son iguales devuelve 0. Su dominio es {-1,0,1}//
    (comparacion == 0) ? cout << "Las cadenas son iguales." << endl : cout << "Las cadenas son diferentes." << endl;
    // copiaCadena(cad1,cad2);
    // cout<<"\nCadena copiada: c1 ="<<cad1<<endl;
    // anadeCadena(cad1, cad2);
    // cout<<"\nCadena anadida: c1 = "<<cad1<<endl;
    (alfabeticoNumerico(cad1)) ? cout << "\nLa cadena " << cad1 << " es alfanumerica." : cout << "\nLa cadena " << cad1 << " no es alfanumerica.";
    (alfabetico(cad1)) ? cout << "\nLa cadena " << cad1 << " es alfabetica." : cout << "\nLa cadena " << cad1 << " no es alfabetica.";
    (numerico(cad1)) ? cout << "\nLa cadena " << cad1 << " es numerica." : cout << "\nLa cadena " << cad1 << " no es numerica.";
    (espacios(cad1)) ? cout << "\nLa cadena " << cad1 << " contiene espacios." : cout << "\nLa cadena " << cad1 << " no contiene espacios.";
    (esMiuscula(cad1)) ? cout << "\nLa cadena " << cad1 << " es minuscula." : cout << "\nLa cadena " << cad1 << " no es minuscula.";
    (esMayuscula(cad1)) ? cout << "\nLa cadena " << cad1 << " es mayuscula." : cout << "\nLa cadena " << cad1 << " no es mayuscula.";  
    aMayusculas(cad1); 
    cout << "\nCadena en mayusculas: "<< cad1 <<endl;
    aMinusculas(cad1);
    cout << "\nCadena en minusculas: "<< cad1 <<endl;
}