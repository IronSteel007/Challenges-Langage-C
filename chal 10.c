#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
	
	float rayon;
	
	printf("ce programme calcule le Circonference d\'un cercle :) \n");
	printf("Entrer le valeur de rayon : ");
	scanf("%f", &rayon);
	
	printf("Circonference du cercle avec le rayon %f = %f", rayon, (float) 2 * M_PI * rayon);
	
	return 0;
}
