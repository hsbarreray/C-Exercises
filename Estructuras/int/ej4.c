#include <stdio.h>

int main() {
    int a, b, c, mayor;

    printf("Ingrese el primer número: ");
    scanf("%d", &a);
    printf("Ingrese el segundo número: ");
    scanf("%d", &b);
    printf("Ingrese el tercer número: ");
    scanf("%d", &c);

    mayor = a; 
    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    printf("El mayor de los tres números es: %d\n", mayor);

    return 0;
}
