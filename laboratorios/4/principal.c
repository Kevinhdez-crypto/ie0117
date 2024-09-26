//aqui  va el programa principal, "el main"

#include <stdio.h>
#include "declaraciones.h"

int main (){
    int a = 7;
    int b = 3;

    printf("a & b = ");
    print_binary(bitwise_and(a,b));


    printf("a | b = ");
    print_binary(bitwise_or(a,b));

    printf("a ^ b = ");
    print_binary(bitwise_xor(a, b));


    printf("~a = ");
    print_binary(bitwise_not_a(a));


    printf("~b = ");
    print_binary(bitwise_not_b(b));
    
    return 0;
}