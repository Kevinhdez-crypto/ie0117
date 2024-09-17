#include <stdio.h>

// Mi carnet es el C33773, voy a utilizar 33773

#define MASA 337
#define VELOCIDAD 73

int main(){
    //defino la masa y la velocidad con las constantes simbolicas
    float masa = MASA;
    float velocidad = VELOCIDAD;
    float energia_cinetica;
    
    //hago el calculo con operaciones combinadas
    energia_cinetica = (0.5)*masa*velocidad*velocidad;

    //Por ultimo imprimo el mensaje

    printf("La energia cinetica es: %.2f J/n", energia_cinetica);

}