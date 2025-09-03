#include <stdio.h>

int main() {
    double base, exponente;

    printf("===== EJERCICIO 5: POTENCIA DE UN NUMERO =====\n");

    printf("Ingrese la base: ");
    scanf("%lf", &base);

    printf("Ingrese el exponente (entero): ");
    scanf("%lf", &exponente);

    double resultado = 1.0;
    int exp = (int)exponente;

    if (exp >= 0) {
        for (int i = 0; i < exp; i++) {
            resultado *= base;
        }
    } else {
        for (int i = 0; i < -exp; i++) {
            resultado *= base;
        }
        resultado = 1.0 / resultado;
    }

    printf("%.2lf elevado a %.2lf es: %.5lf\n", base, exponente, resultado);

    return 0;
}
