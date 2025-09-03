#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("El factorial de %d es %lld\n", n, factorial);
    }

    return 0;
}
