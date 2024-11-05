//Practica en clase de enums Kevin Hernandez Umana C33773
#include <stdio.h>

enum logNivel{
    DEBUG,
    INFO,
    WARN,
    ERROR
};

void logMensaje(enum logNivel nivel, const char *mensaje){
    //Logiga para imprimir los mensajes segun el enum que hay
    switch (nivel)
    {
    case DEBUG:
        printf("'DEBUG' %s\n", mensaje);
        break;
    case INFO:
        printf("'INFO' %s\n", mensaje);
        break;
    case WARN:
        printf("'WARN' %s\n", mensaje);
        break;
    case ERROR:
        printf("'ERROR' %s\n", mensaje);
        break;
    
    default:
    printf("DESCONOCIDO %s\n", mensaje);
        break;
    }

}

int main(){
    logMensaje(INFO, "Inicio del programa");
    logMensaje(DEBUG, "Variable x inicializada en 0");
    logMensaje(WARN, "La conexion es inestable");
    logMensaje(ERROR, "Archivo no encontrado");

    return 0;
}