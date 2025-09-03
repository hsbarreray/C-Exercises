#include <stdio.h>
#include <stdbool.h>

int main() {
    long n, i;
    bool esPrimo = true;

    printf("Ingrese un número: ");
    scanf("%ld", &n);

    if (n <= 1) {
        esPrimo = false;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }

    if (esPrimo) {
        printf("%ld es un número primo.\n", n);
    } else {
        printf("%ld no es un número primo.\n", n);
    }

    return 0;
}
