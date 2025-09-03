#include <stdio.h>

int main() {
    short numero;
    int i;

    printf("Ingrese un número: ");
    scanf("%hd", &numero);

    printf("El número %hd en binario es: ", numero);
    for (i = sizeof(short) * 8 - 1; i >= 0; i--) {
        int bit = (numero >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    return 0;
}
