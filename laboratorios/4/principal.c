//aqui  va el programa principal, "el main"
//Kevin Hernandez umaña C33773
//Este programa trata de una calculadora bit a bit, vamos a implementar las funciones
//Luego vamos a  hacer la logica de esas funciones y de su ejecucion en binario, por ultimo las llamamos
//con los valores enteros de a y b correspondientes. 

#include <stdio.h>
#include "declaraciones.h"

int main (){
    int a = 7; // declaramos las variables a y b con los ultimos digitos de mi carnet
    int b = 3;

    printf("a & b = ");
    print_binary(bitwise_and(a,b)); //aqui hago un doble llamado, primero el de binario y luego el del and


    printf("a | b = ");
    print_binary(bitwise_or(a,b)); //aqui hago un doble llamado, primero el de binario y luego el del or

    printf("a ^ b = ");
    print_binary(bitwise_xor(a, b)); //aqui hago un doble llamado, primero el de binario y luego el del xor


    printf("~a = ");
    print_binary(bitwise_not_a(a)); //aqui hago un doble llamado, primero el de binario y luego el not con el "a"


    printf("~b = ");
    print_binary(bitwise_not_b(b)); //aqui hago un doble llamado, primero el de binario y luego el not con el "b"
    
    return 0;
}