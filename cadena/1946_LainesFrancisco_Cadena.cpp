#include <iostream>
using namespace std;

void llenarCadena(char cad[], int n = 50)
{
    cout << "Ingresa una cadena de caracteres: ";
    cin.getline(cad, n);
    cin.clear();
}

int longitudCadena(char cad[])
{
    int contador = 0;
    for (int i = 0; cad[i] != '\0'; i++)
    {
        contador++;
    }
    return contador++;
}

int contarPalabras(char cad[]) // validacion por si hay espacios seguidos//
{
    int palabras = 0, i;
    bool palabra = false;
    /*RECUENTO DE PALABRAS SEGUN EL NUMERO DE ESPACIOS
    for (i = 0; cad[i] != '\0'; i++)
    {
        if ((cad[i] == ' ' && cad[i + 1] != ' ' && cad[i + 1] != '\0'))
        {
            palabras++;
            palabra = true;
        }
        else if (cad[i - 1] != ' ' && cad[i] == ' ' && cad[i + 1] == '\0')
        {
            palabras++;
            palabra = true;
        }
    }
        recuento de palabras si hay espacios seguidos
    if (palabra == false)
    {
        palabras = 0;
    }
    else if (palabra == true && cad[0]!=' ')
    {
        palabras;
    }
    return palabras;*/

    //RECEUNTO DE PALABRAS SEGUNEL VALOR BOOLEANO DE PALABRA//
    for (i = 0; cad[i] != '\0'; i++)
    {
        if (cad[i] != ' ' && !palabra)
        {
            palabras++;
            palabra = true;
        }
        else if (cad[i] == ' ')
        {
            palabra = false;
        }
    }
    return palabras;
}

main()
{
    char palabras[50];
    llenarCadena(palabras);
    cout << "La cadena ingresada es: " << palabras << endl;
    cout << "La longitud de la cadena es: " << longitudCadena(palabras) << endl;
    cout << "La cantidad de palabras es: " << contarPalabras(palabras) << endl;
}
