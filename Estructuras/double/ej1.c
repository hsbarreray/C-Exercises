#include <stdio.h>

int main() {
    int n = 1000; // Cantidad de términos
    double pi = 0.0;

    printf("===== EJERCICIO 1: VALOR DE PI (SERIE DE LEIBNIZ) =====\n");

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            pi += 1.0 / (2 * i + 1);
        } else {
            pi -= 1.0 / (2 * i + 1);
        }
    }

    pi *= 4.0;
    printf("El valor aproximado de PI con %d terminos es: %.10lf\n", n, pi);

    return 0;
}
