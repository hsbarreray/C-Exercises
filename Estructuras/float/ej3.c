#include <stdio.h>

int main() {
    float a, b, c, promedio;

    printf("===== EJERCICIO 3: PROMEDIO DE 3 NUMEROS =====\n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%f", &c);

    promedio = (a + b + c) / 3;
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}
