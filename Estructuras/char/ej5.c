#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("===== EJERCICIO 5: VERIFICAR DIGITO =====\n");
    printf("Ingrese un caracter: ");
    scanf(" %c", &c);

    if(isdigit(c)) {
        printf("El caracter '%c' es un DIGITO NUMERICO.\n", c);
    } else {
        printf("El caracter '%c' NO es un digito numerico.\n", c);
    }

    return 0;
}
