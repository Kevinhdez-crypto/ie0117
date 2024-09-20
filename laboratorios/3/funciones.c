//Aqui van las funciones
#include <stdio.h>
#include <math.h>
// Se crea la funcion suma, recibe dos paremetros enteros y los suma
void suma(int a, int b){
    int m = a+b;
    printf("El valor de la suma es: %d\n", m);

}
//Se cre la funcion resta, recibe dos parametros enteros, resta el primero con respecto al segundo
void resta(int a,int b){
    int m = a-b;
    printf("El valor de la resta es: %d\n", m);
}
//Se crea la funcion multiplicacion, recibe dos parametros y los multiplica
void multiplicacion(int a,int b){
    int m = a*b;
    printf("El valor de la multiplicacion es: %d\n", m);
}
//Se crea la funcion division, recibe dos parametros enteros y divide el primero con respecto al segundo
void division(int a, int b){
    int m = a/b;
    printf("El valor de la division es: %d\n", m);
}
//Se crea la funcion tipo que tiene una condicion, un if con modulos, si los parametros que recibe se cumplen,
//Se imprime el mensaje, el primero es par y el segundo impar
void tipo(int a, int b){
    if (a % 2 == 0 && b % 2 != 0)
    printf("el valor %d es par y el valor %d es impar\n", a,b);
}
//Se crea la funcion modulo que recibe dos parametros enteros y saca el modulo del primer numero con respecto 
//al segundo
void modulo(int a, int b){
    int modulo_resultante = a%b;
    printf("El modulo de %d con respecto a %d es de: %d\n", a, b, modulo_resultante);
}
//se crea la funcion potencia, recibe dos parametros y el primero es la base, el segundo la potencia a elevar
void potencia(int a, int potencia_a_elevar){
    int resultado = a*a;
    printf("El resultado de tener la base %d y exponente %d es de: %d\n", a, potencia_a_elevar, resultado);

}