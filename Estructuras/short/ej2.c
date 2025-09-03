#include <stdio.h>

int main() {
    short a, b, suma;

    printf("Ingrese el primer número: ");
    scanf("%hd", &a);

    printf("Ingrese el segundo número: ");
    scanf("%hd", &b);

    suma = a + b;
    printf("La suma de %hd y %hd es %hd\n", a, b, suma);

    return 0;
}
