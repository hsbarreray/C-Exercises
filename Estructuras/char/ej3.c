#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("===== EJERCICIO 3: MINUSCULA A MAYUSCULA =====\n");
    printf("Ingrese una letra minuscula: ");
    scanf(" %c", &c);

    char mayuscula = toupper(c);
    printf("La letra en mayuscula es: %c\n", mayuscula);

    return 0;
}
