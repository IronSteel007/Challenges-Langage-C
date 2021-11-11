#include <stdio.h>
#include <stdlib.h>

int main()
 {
	float Metre, Km, Mile;
	
	printf("ce programme Conversion du Mile au Km :) \n");
	
	printf("Enter la valeur en Kilo Metre : ");
	scanf("%f", &Km);
	
	//Convertir  km en mètre et Mile
	
	Metre = Km * 1000;
	Mile = Km / 1.609;
	
	printf("%g Kilo Metre = %g en Metre et %g en Mile", Km, Metre, Mile);
	
	return 0;
}
