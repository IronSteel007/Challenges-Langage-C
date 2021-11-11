#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Entrez la température en degrés Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* convertir Fahrenheit en Celsius */
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
     
     if (celsius < 0)
    printf("  c'est tres froid");
     if (celsius > 0 && celsius<15)
    printf("c'est froid ");
     if (celsius > 15  && celsius <30)
    printf(" c'est chaud ");
    if (celsius > 30)
    printf(" c'est tres chaud");

    return 0;
}



