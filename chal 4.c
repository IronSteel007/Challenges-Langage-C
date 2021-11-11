#include <stdio.h>
#include <stdlib.h>

int main()
 {
	float Metre, Km, Mile;
	
	printf("ce programme est pour la Conversion du Mile au Km :) \n");
	
	printf("Enter le nombre en Mile : ");
	scanf("%f", &Mile);
	
	
	Km = Mile * 1.609;
	Metre = Km * 1000;
	
	printf("%g  Mile  = %g en Metre et %g en Kilo Metre", Mile, Metre, Km);
	
	return 0;
}
