#include <stdio.h>

struct animal {

    char nombre[50];
    int edad;
    char especie[50];
};

int main(){
     struct animal animales[3];

     for (int i = 0; i < 3; i++){
        printf("Ingrese el nombre del animal %d: ", i + 1);
        scanf("%49s", animales[i].nombre);
        printf("Ingrese la edad del animal %d: ", i + 1);
        scanf("%d", &animales[i].edad);
        printf("Ingrese la especie del animal %d: ", i + 1);
        scanf("%49s", animales[i].especie);
        printf("\n");
     }

     for (int i = 0; i < 3; i++){
        printf("Animal %d:\n", i + 1);
        printf("Nombre: %s\n", animales[i].nombre);
        printf("Edad: %d\n", animales[i].edad);
        printf("Especie: %s\n", animales[i].especie);
        printf("\n");
     }

    
    return 0;
}
    