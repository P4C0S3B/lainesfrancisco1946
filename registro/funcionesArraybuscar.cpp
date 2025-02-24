#include <iostream>
using namespace std;

struct persona
{
    int id = 0;
    string nombre;
    int edad;
    bool casado = false;
};

void ingresarDatosRegistro(persona per[], int n)
{
    int i;
    char resp;
    for (i = 0; i < n; i++)
    {
        per[i].id = i + 1;
        cout << "Ingrese el nombre de la persona: ";
        cin.ignore();
        getline(cin, per[i].nombre);
        cout << "Ingrese la edad de la persona: ";
        cin >> per[i].edad;
        cout << "Esta casado? (S/N): ";
        cin.ignore();
        cin.get(resp);
        if (resp == 'S' || resp == 's')
            per[i].casado = true;
    }
}
void mostrarDatosRegistro(persona per[], int n)
{
    int i;
    cout << "ID\tNOMBRE\tEDAD\tCASADO" << endl;
    for (i = 0; i < n; i++)
    {
        cout << per[i].id << "\t";
        cout << per[i].nombre << "\t";
        cout << per[i].edad << "\t";
        (per[i].casado) ? cout << "Si" << endl : cout << "No" << endl;
    }
}
persona buscaPersonaID(persona per[], int n, int id)
{
    int i;
    persona encontrada;
    for (i = 0; i < n; i++)
    {
        if (per[i].id == id)
        {
            encontrada = per[i];
            return encontrada;
        }
    }
    return encontrada;
}

persona buscarPersonaNombre(persona per[], int n, string nombre)
{
    int i, j=0;
    persona encontrada, encontrados[10];
    for (i = 0; i < n; i++)
    {
        /*if (per[i].nombre == nombre)
        {
            encontrada = per[i];
            return encontrada;
        }*/
        if(per[i].nombre.find(nombre)!=string::npos){
            encontrados[j]=per[i];
            j++;
            encontrada = per[i];
            //return encontrada;
        }
    }
    cout << "Cantidad de personas encontradas: " << j << endl;
    for (i=0; i < j; i++){
        cout << encontrada.id << "\t";
        cout << encontrada.nombre << "\t";
        cout << encontrada.edad << "\t";
        (encontrada.casado) ? cout << "Si" << endl : cout << "No" << endl;
    }
    return encontrada;
}

main()
{
    int np, id;
    string nombre;
    cout << "Ingrese la cantidad de personas: ";
    cin >> np;
    persona personas[np], encontrada;
    ingresarDatosRegistro(personas, np);
    mostrarDatosRegistro(personas, np);
    /*cout << "Ingrese el id de la persona a buscar: ";
    cin >> id;*/
    cout << "Ingrese el nombre de la persona: ";
    cin.ignore();
    getline(cin, nombre);
    encontrada = buscarPersonaNombre(personas, np, nombre);
    /*if(encontrada.id == 0){
        cout << "Persona no encontrada.";
    } else {
        cout << "Persona encontrada: " << endl;
    cout << "ID\tNOMBRE\tEDAD\tCASADO" << endl;
    cout << encontrada.id<< "\t";
    cout << encontrada.nombre<< "\t";
    cout << encontrada.edad<< "\t";
    (encontrada.casado)? cout << "Si" << endl: cout << "No" << endl;
    }*/
    if (encontrada.nombre != nombre)
    { // solo sirve para una persona que tenga los datos solicitados estrictaente iguales//
        cout << "Persona no encontrada.";
    }
    else
    {
        cout << "Persona encontrada: " << endl;
        cout << "ID\tNOMBRE\tEDAD\tCASADO" << endl;
        cout << encontrada.id << "\t";
        cout << encontrada.nombre << "\t";
        cout << encontrada.edad << "\t";
        (encontrada.casado) ? cout << "Si" << endl : cout << "No" << endl;
    }
}