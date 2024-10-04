#include <stdio.h>
#include <stdlib.h>

int main () {
    char nombre[50]; //En este caso declaro variables para el nombre, apellido y el carnet
    char apellido[50];
    char carnet[7];

    printf("Ingrese su nombre, su apellido y carnet dejando espacios\n");
    scanf("%s %s %s", nombre, apellido, carnet);

    FILE *archivo = fopen("estudiantes.txt", "a");

    if (archivo == NULL){
        printf("Error, no se pudo abrir el archivo.\n");
        return 1;
    }

    fprintf(archivo, "Nombre: %s, Apellido: %s, Carnet: %s\n", nombre, apellido, carnet);

    fclose(archivo);

    return 0;
}