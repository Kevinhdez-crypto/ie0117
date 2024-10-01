#include <stdio.h>

int main() {
    int dia;
    int mes;
    int año;

    printf("Ingrese la fecha en el formato dd-mm-aaaa: \n");
    int datos = scanf("%d-%d-%d", &dia, &mes, &año);

    if (datos == 3) {
        
        if (mes >= 1 && mes <= 12 && año > 0 && dia >= 1 && dia <= 31) {
            const char *nombreMes;
            switch (mes) {
                case 1: nombreMes = "enero"; break;
                case 2: nombreMes = "febrero"; break;
                case 3: nombreMes = "marzo"; break;
                case 4: nombreMes = "abril"; break;
                case 5: nombreMes = "mayo"; break;
                case 6: nombreMes = "junio"; break;
                case 7: nombreMes = "julio"; break;
                case 8: nombreMes = "agosto"; break;
                case 9: nombreMes = "septiembre"; break;
                case 10: nombreMes = "octubre"; break;
                case 11: nombreMes = "noviembre"; break;
                case 12: nombreMes = "diciembre"; break;
                default: nombreMes = ""; break; 
            }
            printf("La fecha es: %d de %s de %d\n", dia, nombreMes, año);
        } 
    } else {
        printf("Error: no se pudieron leer los datos correctamente.\n");
        printf("El formato debe ser específicamente de dd-mm-aaaa.\n");
    }

    return 0;
}