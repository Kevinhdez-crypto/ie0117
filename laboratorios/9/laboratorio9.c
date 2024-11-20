//Kevin Hernandez Umaña C33773

/*El fin de este laboratorio es crear un programa interactivo en C que permita al usuario
interectuar con una cola el cual ha sido implementada con listas enlazadas simples. Este programa
debe incluir un menu que interactue con el usuario y que tenga opciones como imprimir la cola, agregar un elemento,
eliminar un elemento y salir del programa si el usuario desea hacerlo.
*/
#include <stdio.h>
#include <stdlib.h>

//Estructura para un nodo en la cola
typedef struct Nodo {
    int dato;
    struct Nodo* next;
} Nodo;

//Estructura para la cola
typedef struct Cola{
    Nodo* frente;
    Nodo* fondo;
} Cola;

//Funciòn para iniciar una cola vacia
void iniciarcola(Cola* cola){
    cola->frente = NULL;
    cola->fondo = NULL;
}

//Funcion para verificar si la cola esta vacia
int Vacia(Cola* cola){
    return cola->frente == NULL;
}

//Funcion para agregar una funcion a la cola (enqueue)
void agregar(Cola* cola, int valor){
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevoNodo == NULL){
        printf("Error al asignar el valor.\n");
        return;
    }

    nuevoNodo->dato = valor;
    nuevoNodo->next = NULL;

    if (Vacia(cola)){ //Verificar si la cola esta vacia
        cola->frente = nuevoNodo;
        cola->fondo = nuevoNodo;
    } else{
        cola->fondo->next = nuevoNodo;
        cola->fondo = nuevoNodo;
    }
    printf("Elemento %d agregado correctamente a la cola.\n", valor); //Si todo sale bien se agrega el elemento
}

void eliminar(Cola* cola){ //Verifica si la cola esta vacia, en caso de que si sea, sale el mensaje de error
    if(Vacia(cola)){
        printf("No se puede eliminar ningun elemento, la cola esta vacia.\n"); //Mensaje de error
        return;
    }
    
    //Logica para eliminar el elemento de la cola
    Nodo* temp = cola->frente;
    cola->frente = cola->frente->next;

    if (cola->frente == NULL){
        cola->fondo = NULL;
    } 

    printf("Elemento %d eliminado.\n", temp->dato);
    free(temp); //libero memoria
}

//fyncion para imprimir los elementos de la cola
void imprimir(Cola* cola){

    if (Vacia(cola)){
        printf("La cola esta vacia.\n"); //Imprime el mensaje porque la cola esta vacia, no se puede imprimir nada
    } else { 
        Nodo* actual = cola->frente; // En este apartado esta la logica para imprimir los elementos de la cola
        printf("Los elementos en la cola son: ");
        while (actual != NULL){
            printf("%d ", actual->dato);
            actual = actual->next;
        }
        printf("\n");
    }
}

//Funcion principal del programa

int main(){
    Cola miCola;
    iniciarcola(&miCola);

    int opcion;
    int valor;
    
    //While que maneja el menu y siga apareciendo
    while (1){
        printf("Bienvanid@ al menu interactivo, escoja una opcion por su numero representativo.\n");
        printf("1. Imprimir cola.\n");
        printf("2. Agregar un elemento a la cola.\n");
        printf("3. Eliminar un elemento de la cola.\n");
        printf("4. Salir del programa.\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) { //Analisis de casos
            case 1:
            imprimir(&miCola);
            break;

            case 2:
            printf("Ingrese el elemento a agregar: ");
            scanf("%d", &valor);
            agregar(&miCola, valor);
            break;

            case 3:
            eliminar(&miCola);
            break;

            case 4:
            printf("Fin del programa, gracias por utilizarlo.\n");
            return 0;
            break;

            default:
            printf("Opcion no valida, intente de nuevo.\n");
        }
    }


    return 0; //Fin
}



