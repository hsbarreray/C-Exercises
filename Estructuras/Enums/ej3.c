#include <stdio.h>

enum Semaforo { ROJO, AMARILLO, VERDE };

int main(void) {
    printf("===== EJERCICIO 3: SEMAFORO =====\n");

    enum Semaforo estado = ROJO;
    if (estado == ROJO)      printf("El semaforo esta en ROJO.\n");

    estado = AMARILLO;
    if (estado == AMARILLO)  printf("El semaforo esta en AMARILLO.\n");

    estado = VERDE;
    if (estado == VERDE)     printf("El semaforo esta en VERDE.\n");

    return 0;
}
