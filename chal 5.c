#include <stdio.h>
#include <stdlib.h>


int main()
 {
	
	float fahrenheit, celsius;
	
	printf("ce programme de convertion du Fahrenheit en Celsius : \n\n");
	
	printf("la valeur en Fahrenheit : ");
	scanf("%f", &fahrenheit);
	
	   //la convertion Fahrenheit en Celsius 
	
	celsius = (fahrenheit - 32) / 1.8;

	printf("%g fahrenheit = %g celsius \n", fahrenheit, celsius);

	if (celsius < 0) {	
		printf("it's Very cold");
	}
	else if (celsius < 15) {
		printf("it's cold");
	} 
	else if (celsius < 30) {
		printf("it's hot");
	} 
	else {
		printf("it's Very hot");
	}
	
	
	return 0;
}
