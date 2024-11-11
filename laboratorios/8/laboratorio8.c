//Kevin Hernandez Umana C33773
/*Este programa tiene como funcionalidad 
usar estructuras y memoria dinamica para poder añadir personas
ver sus carnets, telefonos y demas a demas de poder buscar personas por su carnet.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//hago el struct de datos_persona y lo hago con los datos requeridos.
struct datos_persona{ 
    char nombre[50];
    char apellido[50];
    int telefono;
    char carnet[50];
    char enfasis[50];
};

//Creacion de la funcion set_struct
void set_struct(struct datos_persona *persona){ 

    //Bucle para verificar el nombre
    while (1){
        printf("Ingrese el nombre de la persona: ");
        scanf("%s", persona->nombre);
        for (int i = 0; persona->nombre[i] != '\0'; i++){
            if((persona->nombre[i] < 'A' || persona->nombre[i] > 'Z') && (persona->nombre[i] < 'a' || persona->nombre[i] > 'z')){
                //Si encuentra un error en lo que puso el usuario (No puso letras)
                printf("Nombre invalido, utilice solo letras.\n"); //imprime el error
                continue;//se devuelve a pedir el nombre otra vez porque hubo un fallo
            }

        }
        break; //Se sale del bucle si esta todo correcto
    } 

    //Bucle para verificar el apellido
    while (1){
        printf("Ingrese el apellido de la persona: ");
        scanf("%s", persona->apellido);
        for (int i = 0; persona->apellido[i] != '\0'; i++){
            if((persona->apellido[i] < 'A' || persona->apellido[i] > 'Z') && (persona->apellido[i] < 'a' || persona->apellido[i] > 'z')){
                //Si encuentra un error en lo que puso el usuario (No puso letras)
                printf("Apellido invalido, utilice solo letras.\n"); //imprime el error
                continue;//se devuelve a pedir el apellido otra vez porque hubo un fallo
            }

        }
        break; //Se sale del bucle si esta todo correcto
    } 


    //Bucle para verificar si el telefono tiene 8 digitos 
    while (1) {
        printf("Ingrese el telefono (solo 8 digitos): ");
        scanf("%d", &persona->telefono);  // Leemos el teléfono como un número entero

        // Verificamos que el teléfono esté en el rango de 8 dígitos (10000000 a 99999999)
        if (persona->telefono >= 10000000 && persona->telefono <= 99999999) {
            break;  // Si el teléfono tiene 8 dígitos, salimos del bucle
        } else {
            printf("Telefono invalido, verifique que sean 8 digitos.\n");
        }
    }

    //Bucle para verificar el carnet
    while (1) {
        printf("Ingrese el carnet (alfanumerico): "); // Mensaje pidiendo el carnet
        scanf("%s", persona->carnet);

        // For para analizar que sean caracteres alfanumericos
        int esValido = 1; // Flag para verificar si el carnet es válido
        for (int i = 0; persona->carnet[i] != '\0'; i++) {
            // Verificamos que el carácter sea alfanumérico
            if (!((persona->carnet[i] >= '0' && persona->carnet[i] <= '9') || 
                (persona->carnet[i] >= 'A' && persona->carnet[i] <= 'Z') || 
                (persona->carnet[i] >= 'a' && persona->carnet[i] <= 'z'))) {
                esValido = 0; // Marcar como inválido si encontramos un carácter no alfanumérico
                break; // Salir del bucle, ya que encontramos un carácter no válido
            }
        }

        if (esValido) {
            break; // Salir del bucle principal si el carnet es válido
        } else {
            printf("Carnet invalido, solo utilice caracteres alfanumericos.\n");
        }
    } 

    while (1){ //Ahora la logica para el enfasis
        printf("Ingrese el enfais de la persona: ");
        scanf("%s", persona->enfasis);
        for (int i = 0; persona->enfasis[i] != '\0'; i++){
            if((persona->enfasis[i] < 'A' || persona->enfasis[i] > 'Z') && (persona->enfasis[i] < 'a' || persona->enfasis[i] > 'z')){
                //Si encuentra un error en lo que puso el usuario (No puso letras)
                printf("Enfasis invalido, utilice solo letras.\n"); //imprime el error
                continue;//se devuelve a pedir el nombre otra vez porque hubo un fallo
            }

        }
        break; //Se sale del bucle si esta todo correcto
    } 

}

void print_struct(struct datos_persona *persona){ //funcion print_struct que imprime datos de las personas
    printf("\nDatos de la persona:\n");
    printf("Nombre: %s %s\n", persona->nombre, persona->apellido);
    printf("telefono: %d\n", persona->telefono);
    printf("Carnet: %s\n", persona->carnet);
    printf("Enfasis: %s\n", persona->enfasis);
}


int main(){ 
    struct datos_persona *personas = NULL;
    int num_personas = 0;
    int opcion;

    //Bucle para el menu interactivo
    while (1) {
        printf("\nMenu de opciones.\n");
        printf("1. Agregar persona.\n");
        printf("2. Buscar persona.\n");
        printf("3. Imprimir todas las personas.\n");
        printf("4. Salir.\n");
        printf("Seleccione una opcion por el numero que le indica: ");
        scanf("%d", &opcion);

        if (opcion == 1){ //Agregar una persona
            personas = (struct datos_persona*)malloc((num_personas + 1)* sizeof(struct datos_persona)); //agregar memoria
            if (personas == NULL){
                printf("Error al asignar memoria.\n");
                return 1;
                }

            printf("\nPersona: %d\n", num_personas +1); //Mensaje para añadir a la persona
            set_struct(&personas[num_personas]); //llamado a la funcion "set_struct" para anadir a la persona

            num_personas++; //detalle para aumentar el contador de personas y se vea bonito

        } else if (opcion == 2){ 
            //Buscar una persona
            char carnet_buscar[50];
            printf("Ingrese el carnet para buscarlo: ");
            scanf("%s", carnet_buscar);

            int i = 0;
            while (i < num_personas){
                //Vamos a comparar los dos carnets completos
                int j;
                //Este for recorre todos los caracteres para ver si son iguales
                for (j = 0; personas[i].carnet[j] != '\0' && carnet_buscar[j] != '\0'; j++){
                    if (personas[i].carnet[j] != carnet_buscar[j]){ //si son distintos se sale del for
                        break;
                    }
                } 

                if (personas[i].carnet[j] == '\0' && carnet_buscar[j] == '\0'){ // si llega al final y son iguales se imprime los datos
                    print_struct(&personas[i]);
                    break;
                    }

                i++; 
            }

            if (i == num_personas){ // en casod e que no se encuentre el carnet
                printf("Persona no encontrada.\n");
            }

        } else if (opcion == 3){
            //Imprimir todas las personas
            for (int i = 0; i < num_personas; i++){
                print_struct(&personas[i]);
            }

        } else if (opcion == 4){
            //salir del programa
            free(personas); //liberamos memoria
            printf("Fin del programa, memoria liberada.\n");
            break;

        } else {
            printf("Opcion no valida.\n");
        }

    }
  
    return 0;
}
