#include <stdio.h>

//Creacion de la funcion potencia con recursividad

int potencia(int a, int b){

    if (b == 0)
    return 1;

    return a * potencia(a, b - 1); //Parte recursiva

}

int main() { //Parte del main
    int a = 7;
    int b = 3;

    int result = potencia(a, b); //Llamdo a la funcion potencia() con lo valores de mi carnet
    printf("%d elevado a %d es: %d\n", a, b, result); //Imprimo el resultado

    return 0;
}