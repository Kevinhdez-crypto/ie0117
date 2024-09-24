//Kevin Hernandez umaña C33773
//programa de la palabra ingresada por e
#include <stdio.h>
#include <string.h>

int main() {
    char palabra[21];
    char palabra_invertida[21];
    

    printf("Ingrese una palabra: ");
    fgets(palabra, sizeof(palabra), stdin);
    printf("La palabra ingresada es: %s", palabra);

    int longitud = strlen(palabra);

    printf("La longitud de la palabra es: %d\n", longitud);

    printf("Palabra invertida: \n");

    for (int i = 0; i < longitud; i++) {
        palabra_invertida[i] = palabra[longitud - 1 - i]; 
    }

    printf("La palabra invertida es: %s", palabra_invertida);

    return 0;

}