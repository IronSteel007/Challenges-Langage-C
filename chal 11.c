#include <stdio.h>
#include <stdlib.h>

int main()
 {
	
	float longueur, largeur;
	
	printf("ce programme calcule la Circonference d\'un rectangle :\n");
	
	printf("Entrer la valeur de la longueur : ");
	scanf("%f", &longueur);
	
	printf("Entrer la valeur de la largeur : ");
	scanf("%f", &largeur);
	
	printf("La circonference du rectangle est : %.2f", 2 * (longueur + largeur));
	
	return 0;
}
