#include <stdio.h>

int main() {
    long n, i;
    long factorial = 1;

    printf("Ingrese un número: ");
    scanf("%ld", &n);

    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %ld es %ld\n", n, factorial);
    }

    return 0;
}
