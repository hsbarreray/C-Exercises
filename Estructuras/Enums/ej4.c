#include <stdio.h>

enum Dificultad { FACIL = 1, MEDIO, DIFICIL };

int main(void) {
    printf("===== EJERCICIO 4: NIVELES DE DIFICULTAD =====\n");
    printf("Nivel %d: Facil\n",  FACIL);
    printf("Nivel %d: Medio\n",  MEDIO);
    printf("Nivel %d: Dificil\n", DIFICIL);
    return 0;
}
