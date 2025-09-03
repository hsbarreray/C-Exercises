#include <stdio.h>

int main() {
    int i, n;
    int contador = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    long arreglo[n];

    for (i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i + 1);
        scanf("%ld", &arreglo[i]);
    }

    for (i = 0; i < n; i++) {
        if (arreglo[i] % 2 != 0) {
            contador++;
        }
    }

    printf("El arreglo tiene %d números impares.\n", contador);

    return 0;
}
