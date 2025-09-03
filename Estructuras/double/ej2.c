#include <stdio.h>

int main() {
    double a, b;
    printf("===== EJERCICIO 2: SUMA DE DOS DOUBLES =====\n");

    printf("Ingrese el primer numero: ");
    scanf("%lf", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%lf", &b);

    printf("La suma es: %.10lf\n", a + b);

    return 0;
}
