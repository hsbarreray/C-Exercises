#include <stdio.h>

enum DiaSemana { LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO };

void ejercicio1() {
    int valor;

    printf("===== EJERCICIO 1: DIAS DE LA SEMANA =====\n");
    printf("Ingrese un numero (0 = Lunes, 6 = Domingo): ");
    scanf("%d", &valor);

    switch (valor) {
        case LUNES:     printf("El dia es Lunes.\n\n"); break;
        case MARTES:    printf("El dia es Martes.\n\n"); break;
        case MIERCOLES: printf("El dia es Miercoles.\n\n"); break;
        case JUEVES:    printf("El dia es Jueves.\n\n"); break;
        case VIERNES:   printf("El dia es Viernes.\n\n"); break;
        case SABADO:    printf("El dia es Sabado.\n\n"); break;
        case DOMINGO:   printf("El dia es Domingo.\n\n"); break;
        default:        printf("Valor invalido.\n\n");
    }
}

int main() {
    ejercicio1();
    return 0;
}
