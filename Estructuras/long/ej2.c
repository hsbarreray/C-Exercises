#include <stdio.h>

int main() {
    long a, b, suma;

    printf("Ingrese el primer número: ");
    scanf("%ld", &a);
    printf("Ingrese el segundo número: ");
    scanf("%ld", &b);

    suma = a + b;
    printf("La suma de %ld y %ld es %ld\n", a, b, suma);

    return 0;
}
