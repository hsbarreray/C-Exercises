#include <stdio.h>

int main() {
    double num, suma = 0.0;

    printf("===== EJERCICIO 3: PROMEDIO DE 5 NUMEROS =====\n");

    for (int i = 1; i <= 5; i++) {
        printf("Ingrese el numero %d: ", i);
        scanf("%lf", &num);
        suma += num;
    }

    double promedio = suma / 5.0;
    printf("El promedio es: %.2lf\n", promedio);

    return 0;
}
