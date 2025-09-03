#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("===== EJERCICIO 2: VOCAL O CONSONANTE =====\n");
    printf("Ingrese una letra: ");
    scanf(" %c", &c);

    c = tolower(c);

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("La letra '%c' es una VOCAL.\n", c);
    } else {
        printf("La letra '%c' es una CONSONANTE.\n", c);
    }

    return 0;
}
