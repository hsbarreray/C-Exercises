#include <stdio.h>

int main() {
    int n, i;

    printf("¿Cuántas personas? ");
    scanf("%d", &n);

    short edades[n];

    for (i = 0; i < n; i++) {
        printf("Ingrese la edad de la persona %d: ", i + 1);
        scanf("%hd", &edades[i]);
    }

    printf("\nEdades registradas:\n");
    for (i = 0; i < n; i++) {
        printf("Persona %d: %hd años\n", i + 1, edades[i]);
    }

    return 0;
}
