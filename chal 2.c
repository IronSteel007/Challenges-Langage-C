#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Entrez la temp�rature en degr�s Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* convertir Fahrenheit en Celsius */
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    return 0;

}
