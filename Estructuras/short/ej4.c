#include <stdio.h>

int main() {
    int n, i, contador = 0;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);

    short arreglo[n];

    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%hd", &arreglo[i]);
    }

    for (i = 0; i < n; i++) {
        if (arreglo[i] % 2 == 0) {
            contador++;
        }
    }

    printf("El arreglo tiene %d números pares.\n", contador);

    return 0;
}
