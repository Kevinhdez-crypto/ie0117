//Este programa consiste en que el usuario pueda visualizar una piramide del 
//del tamaño que desee, y tambien que se vea la piramide invertida.

//Estudiante: Kevin Hernandez Umaña C33773
#include <stdio.h>
#include <string.h>

void piramide_normal() { //funcion para la piramide normal
    int tamaño_base;
    char caracter;

    //pido los datos de la piramide
    printf("Ingrese el tamaño que desea la base: \n");
    scanf("%d", &tamaño_base);
    printf("Ingrese el caracter que desea utilizar: \n");
    scanf(" %c", &caracter);

    for (int i = 1; i <= tamaño_base; i += 2) { //Este primer for se va a encargar de las filas de mi piramide
        for (int j = 0; j < (tamaño_base - i) / 2; j++) { // este segundo de los espacios en blanco de la piramide
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("%c", caracter); //imprime el caracter
        }
        printf("\n"); // da saltos de linea entre cada fila de la piramide
    }
}

void invertida() { //funcion para la priramide invertida
    int tamaño_base;
    char caracter;

    //pido los datos de la piramide
    printf("Ingrese el tamaño que desea la base: \n");
    scanf("%d", &tamaño_base);
    printf("Ingrese el caracter que desea utilizar: \n");
    scanf(" %c", &caracter);

    for (int i = tamaño_base; i >= 1; i -= 2) { //Este primer for se va a encargar de las filas de mi piramide
        for (int j = 0; j < (tamaño_base - i) / 2; j++) { // este segundo de los espacios en blanco de la piramide
            printf(" ");
        }
        for (int j = 0; j < i; j++) { //imprime el caracter
            printf("%c", caracter);
        }
        printf("\n"); // da saltos de linea entre cada fila de la piramide
    }
}

int main() {
    char opcion[20];
    char opcion_2[20];

    while (1) { //Para hacer un menu interactivo infinito
        printf("***Menu interactivo.***\n\n");
        printf("Ingrese una de las siguientes opciones del menu para imprimir su piramide:\n");
        printf("'PIRAMIDE' O 'INVERTIDA': \n");
        scanf("%s", opcion); //verifico si la opcion esta en el formato correspondiente

        //Condiciones para que se seleccione la funcion que se requiera

        if (strcmp(opcion, "PIRAMIDE") == 0) { //primer caso, piramide normal
            piramide_normal();
        } else if (strcmp(opcion, "INVERTIDA") == 0) { //segundp caso, piramide invertida
            invertida();
        } else {
            printf("Opcion no valida. Intente de nuevo.\n"); // en caso de que digite mal
            continue;
        }

        printf("si desea salir digite 'SALIR'.\n"); // codigo para que salga del programa
        printf("Si desea continuar con el programa digite cualquier otra cosa.\n");
        scanf("%s", opcion_2); // verifico si esta bien el formato

        //condiciones para salir de codigo o continuar
        if (strcmp(opcion_2, "SALIR") == 0){ 
            printf("Gracias por utilizar el programa.");
            break;
        } else{
            continue;
        }

    }
    return 0;
}