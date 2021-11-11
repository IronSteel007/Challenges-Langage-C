#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float celsius, fahrenheit;
	
	printf("ce programme Conversion du C° au F°  :) \n");
	
	printf("Entrer la temperature en Celsius : ");
	scanf("%f", &celsius);
	
	    /* convertir Fahrenheit en Celsius */

	fahrenheit = (celsius * 1.8) + 32;
	
	printf("%.2f °C = %.2f  Fahrenheit", celsius, fahrenheit);
	
	return 0;
}
