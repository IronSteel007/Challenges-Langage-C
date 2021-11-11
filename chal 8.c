#include <stdio.h>
#include <stdlib.h>


int main()
 {
	
	float nombre1, nombre2, nombre3, nombre4;
	
	printf("ce programme calcule la Moyenne et la somme de 4 nombres :) \n\n");
	
	printf("Entrer la valeur de Nombre 1 : ");
	scanf("%f", &nombre1);
	
	printf("Entrer la valeur de Nombre 2 : ");
	scanf("%f", &nombre2);
	
	printf("Entrer la valeur de Nombre 3 : ");
	scanf("%f", &nombre3);
	
	printf("Entrer la valeur de Nombre 4 : ");
	scanf("%f", &nombre4);
	
	printf("la somme : %g + %g + %g + %g = %g \n", nombre1, nombre2, nombre3, 
			nombre4, nombre1 + nombre2 + nombre3+ nombre4);
			
	printf("la moyenne : %g", (nombre1 + nombre2+ nombre3+ nombre4) / 4);
	
	return 0;
}
