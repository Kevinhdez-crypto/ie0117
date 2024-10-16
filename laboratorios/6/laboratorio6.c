//Kevin Hernandez Umaña C33773.

/*Este codigo sirve para calcular el MCD de dos numeros que se pasen con la linea de comandos 
(En la misma terminal). Se analiza con una funcion recursiva, ademas este codigo analiza los posibles
errores que hayan. Por ejemplo que los dos numeros al mismo tiempo sean 0, que no se pasen
los argumentos necesarios en la linea de comando y demas.
*/


#include <stdio.h> //librerias que vamos a utilizar
#include <stdlib.h>

 int calculadora_mcd(int x, int y){ // funcion recursiva aplicando la formula del documento la hago aqui para no declararla
    if (y == 0){
        return x;
    } else{
        return calculadora_mcd(y, x % y);
    }
 }

 int main(int argc, char *argv[]){ // declaracion de los argumentos y el posible error, en caso de que no se cumpla
    if (argc != 3){
        printf("Error. Se deben pasar exactamente dos numeros enteros.\n"); //imprime el error
        return 1; //retornamos 1 para señalar el error, como se dijo en clase
    }

    int x = atoi(argv[1]); //ponemos los argumentos a enteros con atoi
    int y = atoi(argv[2]);

    if (x < 0 || y < 0){ // si alguno de los numeros es negativo, se imprime el error
        printf("Error, los valores no pueden ser menores a '0'.\n");
        return 1;
    }

    if (x == 0 && y == 0){ //si los dos numeros son iguales a cero imprimimos el error
        printf("Error, los valores no deben ser iguales a '0' al mismo tiempo.\n");
        return 1;
    }

    int mcd = calculadora_mcd(x, y); //llamamos a la funcion con los valores 
    printf("El MCD de %d y %d es: %d.\n", x, y, mcd); //imprimimos el resultado

    return 0;
 } 