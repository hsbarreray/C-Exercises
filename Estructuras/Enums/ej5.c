#include <stdio.h>

enum Colores { ROJO = 1, AZUL, VERDE, AMARILLO, NEGRO };

static const char* nombre_color(int v) {
    switch (v) {
        case ROJO: return "Rojo";
        case AZUL: return "Azul";
        case VERDE: return "Verde";
        case AMARILLO: return "Amarillo";
        case NEGRO: return "Negro";
        default: return "?";
    }
}

int main(void) {
    printf("===== EJERCICIO 5: RECORRER ENUM =====\n");
    for (int i = ROJO; i <= NEGRO; i++) {
        printf("%s\n", nombre_color(i));
    }
    return 0;
}
