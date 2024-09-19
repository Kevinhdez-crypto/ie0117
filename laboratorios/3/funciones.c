//Aqui van las funciones
#include <stdio.h>
#include <math.h>

void suma(int a, int b){
    int m = a+b;
    printf("El valor de la suma es: %d\n", m);

}

void resta(int a,int b){
    int m = a-b;
    printf("El valor de la resta es: %d\n", m);
}

void multiplicacion(int a,int b){
    int m = a*b;
    printf("El valor de la multiplicacion es: %d\n", m);
}

void division(int a, int b){
    int m = a/b;
    printf("El valor de la division es: %d\n", m);
}

void tipo(int a, int b){
    if (a % 2 == 0 && b % 2 != 0)
    printf("el valor %d es par y el valor %d es impar\n", a,b);
}

void modulo(int a, int b){
    int modulo_resultante = a%b;
    printf("El modulo de %d con respecto a %d es de: %d\n", a, b, modulo_resultante);
}

void potencia(int a, int potencia_a_elevar){
    int resultado = a*a;
    printf("El resultado de tener la base %d y exponente %d es de: %d\n", a, potencia_a_elevar, resultado);

}