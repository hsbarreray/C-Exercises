#include <stdio.h>

int main() {
    float x, y;

    printf("===== EJERCICIO 4: COMPARAR DOS NUMEROS =====\n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &x);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &y);

    if (x > y) {
        printf("%.2f es mayor que %.2f\n", x, y);
    } else if (y > x) {
        printf("%.2f es mayor que %.2f\n", y, x);
    } else {
        printf("Ambos numeros son iguales: %.2f\n", x);
    }

    return 0;
}
