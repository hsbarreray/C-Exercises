#include <stdio.h>

int main() {
    float radio, area;
    const float PI = 3.14159;

    printf("===== EJERCICIO 1: AREA DE UN CIRCULO =====\n");
    printf("Ingrese el radio: ");
    scanf("%f", &radio);

    area = PI * radio * radio;
    printf("El area del circulo es: %.2f\n", area);

    return 0;
}
