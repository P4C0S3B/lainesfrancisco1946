#include <iostream>
using namespace std;

main(){
    string nombre="Pedro";
    string apellido("Perez"); //dos formas de definir un string, aunque la primera es la mas utilizada por mucho//
    string inicial(1, 'P');
    string cadena = "Juan Jose Arturo";
    string nombre2(cadena, 4, 4);//metodo constructivo, el primer parametro es la cadena, el segundo es el indice inicial, y el tercero numero de caracteres que se quiere extraer a partir de indice inicial//


    inicial += "edro"; //asi se agregan caracteres al string, se puede hacer con un +=
    cout<<inicial[0]<<endl;
    cout<<inicial<<endl;
    inicial = "cad";
    cout<<inicial<<endl;
    cout<<nombre2<<endl;
    cout<<"La longitud de nombre2 es: "<<nombre2.length()<<endl;//metodo para saber la longitud del string, una alternativa es el size()//
    return 0;
}