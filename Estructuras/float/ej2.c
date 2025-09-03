#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("===== EJERCICIO 2: CELSIUS A FAHRENHEIT =====\n");
    printf("Ingrese la temperatura en Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f °C equivalen a %.2f °F\n", celsius, fahrenheit);

    return 0;
}
