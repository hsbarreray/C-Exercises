#include <stdio.h>

int main() {
    long x, y, producto;

    printf("Ingrese el primer número: ");
    scanf("%ld", &x);
    printf("Ingrese el segundo número: ");
    scanf("%ld", &y);

    producto = x * y;
    printf("El producto de %ld y %ld es %ld\n", x, y, producto);

    return 0;
}
