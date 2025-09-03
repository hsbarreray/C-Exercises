#include <stdio.h>

int main() {
    double x;

    printf("===== EJERCICIO 4: POSITIVO, NEGATIVO O CERO =====\n");
    printf("Ingrese un numero: ");
    scanf("%lf", &x);

    if (x > 0) {
        printf("El numero %.2lf es POSITIVO.\n", x);
    } else if (x < 0) {
        printf("El numero %.2lf es NEGATIVO.\n", x);
    } else {
        printf("El numero es CERO.\n");
    }

    return 0;
}
