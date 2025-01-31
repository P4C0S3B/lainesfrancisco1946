//factorial.h
#ifndef FACTORIAL_M
#define FACTORIAL_M
//declaracion de la funcion factorial//
int calcularFactorial(int n);
//Definicion de  la funcion factorial
int calcularFactorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else{
        return n*calcularFactorial(n-1);
    }
}
#endif // FACTORIAL_M

